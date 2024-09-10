#include "bits/stdc++.h"
using namespace std;

int main(){

    string a;
    cin >> a;
    string str = "";
    str += a[0];
    for(int i=1;i<a.length();i++){

        if(a[i]>='0'&&a[i]<='9'){
            if(!(a[i-1]>='0'&&a[i-1]<='9')){
                str += ", ";
            }
        }
        else {
            if(a[i]>='A'&&a[i]<='Z'){
                str+=", ";
            }
            else if((a[i]>='a'&&a[i]<='z')&&(a[i-1]>='0'&&a[i-1]<='9')){
                str += ", ";
            }
        }

        str += a[i];

    }

    cout << str;

    return 0;
}
