#include "bits/stdc++.h"
using namespace std;

int main(){

    string a;
    cin >> a;

    int cnt =0;
    char prev = a[0];
    for(auto x:a){
        if( x == prev) cnt++;
        else {
            cout << prev <<" " << cnt << " ";
            prev = x;
            cnt =1;
        }
    }
    cout << prev << " " << cnt;

    return 0;
}
