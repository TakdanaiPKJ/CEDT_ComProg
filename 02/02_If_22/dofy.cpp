#include "bits/stdc++.h"
using namespace std;

vector <int > vt ={31,29,31,30,31,30,31,31,30,31,30,31};

int main(){

    int d,m,y;
    cin >> d >> m >> y;
    
    y-=543;
    if(y%4!=0 || (y%100==0&&y%400!=0)) vt[1] = 28;

    int ans=0;
    //if(m==1) ans+=d;
    for(int i=0;i<m-1;i++){
        ans += vt[i];
    }
    ans += d;

    cout << ans;

    return 0;
}
