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
            cnt =0;
        }
    }
    cout << prev << " " << cnt+1;

    return 0;
}
