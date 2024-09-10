#include "bits/stdc++.h"
using namespace std;

int main(){

    string a,b;
    cin >> a ; cin.ignore();
    getline(cin,b);
    int cnt=0;
    for(int i=0;i<b.length();i++){
        bool chk = false;
        for(int j=0;j<a.length();j++){
            if(b[i+j]!=a[j]) {
                chk = false ;
                break;
            }
            chk = true;
        }
        if(chk){
            //cout << b[i];
            cnt++; 
        } 
    }
    cout << cnt;


}
