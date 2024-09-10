#include "bits/stdc++.h"
using namespace std;

int main(){

    float arr[5];
    float mi=INT_MAX,ma=INT_MIN;
    for(int i=0;i<4;i++){
        cin >> arr[i];
        mi=min(mi,arr[i]);
        ma=max(ma,arr[i]);
    }
    float ans=0;
    for(int i=0;i<4;i++){
        if(arr[i]==mi|| arr[i]==ma){
            if(arr[i]==mi) mi=INT_MIN;
            else ma=INT_MAX;
            continue;
        } 
        ans +=arr[i];
        //cout << ans <<endl;
    }
    ans/=2;
    ans = round(ans*1000.0)/1000.0 ;
    //cout << ans <<endl;
    cout <<  round(ans*100.0)/100.00 ;
    //cout << fixed << setprecision(2) << ans;

}