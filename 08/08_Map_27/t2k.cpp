#include "bits/stdc++.h"
using namespace std;

unordered_map<string , string> ump = { {"a","2"},{"b","22"},{"c","222"}, {"d","3"},{"e","33"},{"f","333"},
{"g","4"},{"h","44"},{"i","444"}, {"j","5"},{"k","55"},{"l","555"}, {"m","6"},{"n","66"},{"o","666"},
{"p","7"},{"q","77"},{"r","777"},{"s","7777"}, {"t","8"},{"u","88"},{"v","888"},
{"w","9"},{"x","99"},{"y","999"},{"z","9999"},{" ","0"} };

string t2k(char ip) {
  //tolower(ip);
  string a = "";
  a += ip;
  return ump[a];
}

int main() {

  string opcode , ip;
  while (cin >> opcode) {
    getline(cin >> ws , ip);
    string tmp = "";
    if (opcode == "T2K") {
      cout << ">> ";
      for (auto x : ip) {
        if (isalpha(x) || x == ' ') {
          cout << t2k(tolower(x)) << " ";
        }
      }
      cout << "\n";
    }
    if (opcode == "K2T") {
      cout << ">> ";
      for (auto x : ip) {
        if (isdigit(x)) {
          tmp += x;
        }
        else {
          for (auto& it : ump) {
            if (it.second == tmp) {
              cout << it.first ;
              tmp = "";
              break;
            }
          }
        }
      }
      for (auto& it : ump) {
        if (it.second == tmp) {
          cout << it.first ;
          break;
        }
      }
      cout << "\n";
    }
  }

  return 0;
}
