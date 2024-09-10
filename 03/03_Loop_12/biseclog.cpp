#include "bits/stdc++.h"
using namespace std;

double a;

int bs(int low,int high){
    while (low<high){
        
        int x = low+(high-low) / 2;

        if(abs(a-pow(x,2))<=(pow(10,-10)*max(a,pow(x,2)))) return x;

        if(pow(x,2)>a) high = x;
        else if(pow(x,2)<a) low = x  ;
        else return x;

    }
    return -1;
}

int main(){

    cin >> a;

    cout << bs(1,a);

    return 0;
}
