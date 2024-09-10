#include "iostream"
#include "cmath"
using namespace std;

int main(){

    float a;
    cin >> a;
    if(a<1000) {
        cout << a;
        return 0;
    }
    if(a/1000<1000) {
        if(a/1000<10) cout << round((a/1000)*10)/10.0 << "K" ;
        else cout << round((a/1000)*1.0)/1.0 << "K";
        return 0;
    }
    if(a/1000000<1000) {
        if(a/1000000<10) cout << round((a/1000000)*10)/10.0 << "M" ;
        else cout << round((a/1000000)*1.0)/1.0 << "M";
        return 0;
    }
    if(a/1000000000<10) cout << round((a/1000000000)*10)/10.0 << "B" ;
    else cout << round((a/1000000000)*1.0)/1.0 << "B";

    return 0;
} 