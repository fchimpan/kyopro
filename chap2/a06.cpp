#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define fi first
#define se second
#define sz(x) ((int)(x).size())
using ll = long long;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define MOD 1000000007
const ll INF = 1e18;
template <class T>
void show(vector<T> v) {
  for (int i = 0; i < v.size(); i++) {
    cerr << v[i] << " ";
  }
  cerr << endl;
}
template <class T>
inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T>
inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> A(N);
  vector<int> L(Q), R(Q);
  rep(i, N) cin >> A[i];
  rep(i, Q) cin >> L[i] >> R[i];

  vector<ll> sum(N + 1);
  sum[0] = 0;
  rep(i, N) { sum[i + 1] = A[i] + sum[i]; }
  rep(i, Q) { cout << sum[R[i]] - sum[L[i] - 1] << endl; }
  return 0;
}
