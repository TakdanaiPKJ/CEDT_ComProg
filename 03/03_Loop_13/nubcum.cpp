#include "bits/stdc++.h"
using namespace std;

int main(){

    string a,b;
    cin >> a ; cin.ignore();
    getline(cin,b);
    string str;
    int cnt=0;

    for(auto x: b){

        if(isalpha(x)){
            str += x;
        }
        else {
            if(str == a) cnt++;
            str.clear();
        }

    }
    if(str == a) cnt++;

    cout << cnt;


}
