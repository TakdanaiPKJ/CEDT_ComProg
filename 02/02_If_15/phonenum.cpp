#include "bits/stdc++.h"
using namespace std;

int main(){

    string str;
    cin >> str;
    
    cout << (str[0]=='0' && (str[1]=='8'||str[1]=='9' || str[1]=='6') ? "Mobile number" : "Not a mobile number");

    return 0;
}
