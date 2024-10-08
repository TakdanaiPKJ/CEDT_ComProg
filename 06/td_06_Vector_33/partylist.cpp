#include "bits/stdc++.h"
using namespace std;

struct party {
  string name;
  int rawcnt;
  int amount;
  double frac;
  bool operator<(const party &x) const { return frac > x.frac; }
};

struct edge {
  string name;
  int amount;
  int cnt;
  bool operator<(const edge &x) const {
    if (amount == x.amount)
      return cnt < x.cnt;
    return amount < x.amount;
  }
};

vector<party> vt;
priority_queue<edge> ans;

int main() {

  string a;
  int n;
  double allcnt = 0;
  while (cin >> a) {
    if (a == "END")
      break;
    cin >> n;
    allcnt += n;
    vt.push_back({a, n, 0, 0});
  }
  allcnt /= 100;
  int quota = 100;
  for (auto &x : vt) {
    x.amount = x.rawcnt / allcnt;
    x.frac = (1.0 * x.rawcnt / allcnt) - x.amount;
    quota -= x.amount;
  }
  sort(vt.begin(), vt.end());
  int cnt = 0;
  while (quota > 0) {
    vt[cnt].amount++;
    cnt++;
    quota--;
    cnt %= vt.size();
  }
  for (auto x : vt) {
    edge a;
    a.name = x.name;
    a.amount = x.amount;
    a.cnt = x.rawcnt;
    ans.push({x.name, x.amount, x.rawcnt});
  }
  while (!ans.empty()) {
    if (ans.top().amount == 0)
      break;
    cout << ans.top().name << " " << ans.top().amount << " " << ans.top().cnt
         << "\n";
    ans.pop();
  }

  return 0;
}
