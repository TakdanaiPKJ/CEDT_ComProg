#include "bits/stdc++.h"
using namespace std;

int arr[10000];

int main(){

    int n;
    cin >> n;
    int a,b,c;
    int cnt=0;
    cin >> a >> b;
    for(int i=0;i<n-2;i++){
        cin >> c;
        if(b>a&&b>c)cnt++;
        a=b;
        b=c;
    }
    cout << cnt;
    return 0;
}
