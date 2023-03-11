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
  cin >> N;
  vector<int> A(N);

  rep(i, N) cin >> A[i];
  cin >> Q;
  vector<int> L(Q), R(Q);
  rep(i, Q) cin >> L[i] >> R[i];
  vector<int> winSum(N + 1), loseSum(N + 1);
  rep(i, N) {
    if (A[i] == 1) {
      winSum[i + 1] = winSum[i] + 1;
      loseSum[i + 1] = loseSum[i];
    } else {
      loseSum[i + 1] = loseSum[i] + 1;
      winSum[i + 1] = winSum[i];
    }
  }

  rep(i, Q) {
    int win = winSum[R[i]] - winSum[L[i] - 1];
    int lose = loseSum[R[i]] - loseSum[L[i] - 1];

    if (win < lose)
      cout << "lose" << endl;
    else if (win > lose)
      cout << "win" << endl;
    else
      cout << "draw" << endl;
  }

  return 0;
}
