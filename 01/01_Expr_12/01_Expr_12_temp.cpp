#ifdef ONPC
#define _GLIBCXX_DEBUG // if onpc it's will run -DONPC when run
#endif
#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;
// mt19937 rnd(239);
mt19937
    rnd(chrono::steady_clock::now()
            .time_since_epoch()
            .count()); // take current time in nano second as seed random number

typedef long long ll;
typedef long double ld;

void solve() {

  double w, h;
  cin >> w >> h;

  cout << setprecision(15);
  cout << (sqrt(w * h) / 60) << endl;
  cout << (0.024265 * pow(w, 0.5378) * pow(h, 0.3964)) << endl;
  cout << (0.0333 * pow(w, (0.6157 - 0.0188 * log10(w))) * pow(h, 0.3));
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int TET = 1e9;
  cin >> TET;
  for (int i = 1; i <= TET; i++) {
    solve();
#ifdef ONPC
    cout << "\n __________________________ \n";
#endif
  }
#ifdef ONPC
  cerr << endl
       << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
#endif
  return 0;
}
