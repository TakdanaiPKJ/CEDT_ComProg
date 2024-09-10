#include "bits/stdc++.h"
using namespace std;

int main(){

    double arr[5];
    double mi=INT_MAX,ma=INT_MIN;
    for(int i=0;i<4;i++){
        cin >> arr[i];
        mi=min(mi,arr[i]);
        ma=max(ma,arr[i]);
    }
    double ans=0;
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
    //cout << ans;
    //ans = round(ans*1000.0)/1000.0 ;
    //cout << ans <<endl;
    cout <<  round(ans*100.0)/100.0 ;
    //cout << fixed << setprecision(2) << ans;

}