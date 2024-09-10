#include "bits/stdc++.h"
using namespace std;

int x[99999];
int y[99999];

int main(){

    int zig;
    int i;
    int minn = INT_MAX;
    int maxx = INT_MIN;

    for(i=1;true;i++){
        int a,b;
        cin >> a ;
        if(a==-999||a==-998) {
            zig = a;
            break;
        }
        cin >> b;
        x[i]=a;
        y[i]=b;
    }

    if(zig==-998){
        for(int j=1;j<i;j++){
            minn = min(minn , j%2!=0 ? x[j] : y[j]);
            maxx = max(maxx , j%2!=0 ? y[j] : x[j]);
        }
    }
    else if(zig==-999){
        for(int j=1;j<i;j++){
            
            maxx = max(maxx , j%2!=0 ? x[j] : y[j]);
            minn = min(minn , j%2!=0 ? y[j] : x[j]);
            //cout << maxx << endl;
        }
    }
    printf("%d %d",minn,maxx);

    return 0;
}
