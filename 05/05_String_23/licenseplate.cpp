#include "bits/stdc++.h"
using namespace std;

int main(){

    string a;
    cin >> a;
    int ip;
    cin >> ip;
    int lst=0;
    string strtmp = "";
    for(int i=4;i<=6;i++){
        strtmp += a[i];
    }
    lst = stoi(strtmp);
    int fst = a[0]-'0';

    lst += ip;
    int tod = lst/1000;
    lst %= 1000;

    int tmp = a[2]-65;
    tmp += tod;
    tod = tmp/26;
    tmp %= 26;
    //if(tod>=1) 
    a[2] = tmp+65;
    //else a[2] = tmp+64;

    tmp = a[1]-65;
    tmp += tod;
    tod = tmp/26;
    tmp %= 26;
    if(tod>=1) a[1] = tmp+65;
    else a[1] = tmp +65;

    fst += tod;

    string alst = "";
    if(lst<10) alst = "00";
    else if (lst<100) alst = "0";

    cout << fst << a[1] << a[2] << "-" << alst << lst;

    return 0;
}
