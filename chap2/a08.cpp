#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i < (n + 1); i++)
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
  int h, w, q;
  cin >> h >> w;
  vector<vector<int>> x(h + 1, vector<int>(w + 1));
  rep(i, h) {
    rep(j, w) { cin >> x[i][j]; }
  }
  cin >> q;
  vector<int> a(q), b(q), c(q), d(q);
  rep(i, q) cin >> a[i] >> b[i] >> c[i] >> d[i];

  rep(i, h) rep(j, w - 1) { x[i][j + 1] += x[i][j]; }
  rep(i, w) rep(j, h - 1) { x[j + 1][i] += x[j][i]; }

  rep(i, q) cout << x[c[i]][d[i]] + x[a[i] - 1][b[i] - 1] - x[a[i] - 1][d[i]] -
                        x[c[i]][b[i] - 1]
                 << endl;

  return 0;
}
