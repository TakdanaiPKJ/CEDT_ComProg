#include "bits/stdc++.h"
using namespace std;

int main(){

    unsigned long long st,en;
    unsigned long long b;
    string str;
    string tmp;
    cin >> st >> en;
    while (st<=en){
        
        tmp = to_string(st);
        str.append(tmp);

        st++;
    }
    cout << str.length();
    //cout << str;

    return 0;
}
