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

unordered_map<string, int> student;
string gl[10] = {"F", "D", "D+", "C", "C+", "B", "B+", "A"};
vector<int> grade;
vector<string> order;

void solve() {

  string a, b;
  int n = 0;
  while (cin >> a) {
    if (a == "q")
      break;
    cin >> b;
    student[a] = n;
    for (int i = 0; i < 8; i++) {
      if (gl[i] == b) {
        grade.push_back(i);
        break;
      }
    }
    order.push_back(a);
    n++;
  }
  while (cin >> a) {
    grade[student[a]]++;
    if (grade[student[a]] >= 8)
      grade[student[a]]--;
  }
  for (int i = 0; i < n; i++) {
    cout << order[i] << " " << gl[grade[i]] << "\n";
  }
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int TET = 1;
#ifdef ONPC
  cin >> TET;
#endif
  for (int i = 1; i <= TET; i++) {
    solve();
#ifdef ONPC
    cout << "\n__________________________\n";
#endif
  }
#ifdef ONPC
  cerr << endl
       << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
#endif
  return 0;
}
