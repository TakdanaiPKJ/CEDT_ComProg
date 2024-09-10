#include "bits/stdc++.h"
using namespace std;

int main(){

    string str;
    getline(cin>>ws,str);

    string fstn,fstp,lstn,lstp,lst;
    bool chk = false;
    for(auto x: str){
        if(isalpha(x)){
            if(x == 'a' || x == 'e' ||x == 'i' ||x == 'o' ||x == 'u' || chk){
                fstp += x;
                chk = true;
            } 
            else fstn += x;
        } 
        else break;
    }

    chk = false;

    //cout << str.length()-1;
    for(int i=str.length()-1;i>=0;i--){
        if(isalpha(str[i])){
           lst += str[i];
        }
        else break;
    }
    reverse(lst.begin(),lst.end());
    for(auto x : lst){
        if(x == 'a' || x == 'e' ||x == 'i' ||x == 'o' ||x == 'u' || chk){
            lstp += x;
            chk = true;
        }
        else lstn += x;
    }

    cout << fstn+lstp;
    cout << str.substr(str.find(fstn+fstp)+fstn.length()+fstp.length() , str.length()-lst.length()-fstn.length()-fstp.length());
    cout << lstn+fstp;
    //cout << str.find(fstn+fstp)+fstn.length()+fstp.length();
    //cout << lstn << " " << lstp;


    return 0;
}
