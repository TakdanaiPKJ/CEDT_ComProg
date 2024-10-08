#include "bits/stdc++.h"
using namespace std;

set<int> st;

int main() {

  int n;
  while (cin >> n) {
    if (st.find(n) != st.end()) {
      cout << st.size() + 1;
      return 0;
    } else
      st.insert(n);
  }

  cout << "-1";

  return 0;
}
