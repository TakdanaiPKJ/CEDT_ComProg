#include "bits/stdc++.h"
using namespace std;

int main(){

    string a;
    bool chk = false;
    getline (cin ,a);
    for(int i=0;i<a.length();i++){
        if(a[i]=='('){
            a[i] = '[';
            chk = true;
        } 
        else if(a[i]==')'){
            a[i] = ']';
            chk = true;
        } 
        else if(a[i]=='['){
            a[i] = '(';
            chk = true;
        } 
        else if(a[i]==']'){
            a[i] = ')';
            chk = true;
        } 
    }
    cout << a;

    return 0;
}
