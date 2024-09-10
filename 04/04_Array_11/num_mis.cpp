#include "bits/stdc++.h"
using namespace std;

bool arr[20];

int main(){

    string str;
    int cnt = 10;
    cin >> str;

    for(int i=0;i<str.length();i++){

        if(str[i]>='0' && str[i]<='9'&&(!arr[str[i]-'0'])){
            //cout << i-'0';
            arr[str[i]-'0'] = true;
            cnt--;
        }
        
    }
    if(cnt == 0){
        cout << "None";
        return 0;
    }
    
    for(int i=0;i<10;i++){
        if(arr[i]) continue;
        cnt--;
        cout << i << (cnt>0 ? "," : "");
    }

    return 0;
}
