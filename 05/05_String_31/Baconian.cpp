#include "bits/stdc++.h"
using namespace std;

unordered_map<string,  string> ump ={
  {"UUUU","0"},{"UUUL","1"},{"UULU","2"},{"UULL","3"},{"ULUU","4"},{"ULUL","5"},
  {"ULLU","6"},{"ULLL","7"},{"LUUU","8"},{"LUUL","9"},{"LULU","-"},{"LULL",","}, };
unordered_map<char,  string> enc ={
  {'0',"UUUU"},{'1',"UUUL"},{'2',"UULU"},{'3',"UULL"},{'4',"ULUU"},{'5',"ULUL"},
  {'6',"ULLU"},{'7',"ULLL"},{'8',"LUUU"},{'9',"LUUL"},{'-',"LULU"},{',',"LULL"}, };

string fmt;

string strp(string ip){
  string tmp = "";
  for(auto x: ip){
    if(isalpha(x)) tmp+=x;
  }
  return tmp;
}

string decode(string ip){
  ip = strp(ip);
  string tmp = "" ;
  string ans = "";
  for(int i=0;i<ip.length();i++){
    tmp += (islower(ip[i]) ? "L" : "U");
    if(tmp.length()==4){
      ans += ump[tmp];
      tmp = "";
    }
  }
  return ans;
}

string encode(string ip){
  string tmp = "";
  string ans = "";
  int cnt = 0;
  for(auto x:ip){
    tmp += enc[x];
  }
  for(int i=0;i<tmp.length();i++){
    while(!isalpha(fmt[cnt%fmt.length()])) {
      ans += fmt[cnt];
      cnt ++;
    }
    cnt %= fmt.length();
    if(tmp[i]=='U') ans += toupper(fmt[cnt]);
    else ans += tolower(fmt[cnt]);
    cnt++;

    

  }
  return ans;
}

int main(){

  string a; 
  cin >> fmt;
  char code;
  while (cin >> code){
    getline(cin>>ws,a);
    if(code == 'E'){
      cout << encode(a) << "\n";
    }
    else cout << decode(a) << "\n";
  }
  

 return 0;
}
