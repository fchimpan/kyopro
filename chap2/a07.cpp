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
  int D, N;
  cin >> D >> N;
  vector<int> L(N), R(N);
  rep(i, N) cin >> L[i] >> R[i];
  vector<int> ratio(D + 1);
  rep(i, N) {
    ratio[L[i]]++;
    ratio[R[i] + 1]--;
  }
  vector<int> sum(D);
  rep(i, D) ratio[i + 1] += ratio[i];
  for (int i = 1; i < D + 1; i++) {
    cout << ratio[i] << endl;
  }

  return 0;
}
