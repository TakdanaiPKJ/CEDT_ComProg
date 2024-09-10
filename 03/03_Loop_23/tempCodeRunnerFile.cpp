#include "bits/stdc++.h"
using namespace std;

int main(){

    string str;
    int n;
    cin >> str;
    cin >> n;
    int cnt =1 ;
    bool chk= false;
    for(int i=0;i<str.length();i++){
        if(str[i]==str[i+1]){
            cnt++;
        }
        else {
            if(chk){
                for(int j=i-cnt+1;j<=i;j++){
                    str[j] = ']';
                    if(str[j]!=str[i-1]) break;
                }
            } 
            cnt=1;
            chk = false;
        }
        if(cnt >= n) {
            //str[i] = '0';
            chk = true;
        }
    }

    for(int i=0;i<str.length();i++){
        if(str[i]==']') continue;
        cout << str[i];
    }
   //cout << str;

    return 0;
}
