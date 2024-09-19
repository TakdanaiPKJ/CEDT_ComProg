#include "bits/stdc++.h"
using namespace std;

unordered_map <string , vector<string>> ump;
vector<string> order;

bool chk(queue <string > q, string x, string y) {
  while (!q.empty()) {
    if (q.front() == y) {
      cout << ">> " << x << " " << "\n";
      //found = true;
      return true;
    }
    q.pop();
  }
  return false;
}

int main() {

  int n;
  cin >> n;
  for (int i = 0;i < n;i++) {
    string a;
    getline(cin >> ws , a);
    string key = a.substr(0 , a.find(" "));
    string tmp = "";
    for (int j = a.find(" ") + 1;j < a.size();j++) {
      if (isalnum(a[j])) {
        tmp += a[j];
      }
      else {
        if (ump.find(key) == ump.end()) {
          ump[key].push_back(tmp);
          order.push_back(key);
        }
        else ump[key].push_back(tmp);
        tmp = "";
      }
    }
  }
  string ip;
  cin >> ip;

  bool found = false;
  queue <string> q;
  for (auto x : ump[ip]) if (x != "")q.push(x);
  for (auto x : order) {
    if (x == ip) continue;
    for (auto y : ump[x]) {
      if (chk(q,x,y)){
        found = true;
        break;
      }
    }
  }
  q.pop();
  cout << (found ? "" : ">> Not Found");

  return 0;
}
