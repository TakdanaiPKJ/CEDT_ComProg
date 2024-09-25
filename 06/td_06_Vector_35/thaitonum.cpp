#include "bits/stdc++.h"
using namespace std;

unordered_map<string , int> ump = { {"soon",0}, {"neung",1}, {"song",2}, {"sam",3}, {"si",4}, {"ha",5}, {"hok",6}, {"chet",7}, {"paet",8}, {"kao",9},
                                  {"yi",2}, {"sip",10}, {"roi",100}, {"phan",1000}, {"muen",10000}, {"saen",100000}, {"lan",1000000}, {"et",1} };

int main() {

  string a;
  while (true) {
    getline(cin >> ws , a);
    if (a == "q") break;
    string tmp = "";
    int ans = 0;
    int cal = 1;
    for (auto x : a) {
      if (isalpha(x)) {
        tmp += x;
      }
      else {
          cal += ump[tmp]-1;
        }
        else {
          cal *= ump[tmp];
          ans += cal;
          cal =1;
        }
        tmp = "";
      }
    }
    //int cal = (ump[tmp] < 10 ? ans + ump[tmp] : ans * ump[tmp]);
    cout << ans;
  }

  return 0;
}
