#include "bits/stdc++.h"
using namespace std;

bool up,lw,num,ex;

int main(){

    string str;

    while (cin>>str){
        
        up = false; lw= false; num= false; ex= false;

        for(int i=0;i<str.length();i++){
            if(str[i]>='0'&&str[i]<='9') num = true;
            if(str[i]>='a'&&str[i]<='z') lw = true;
            if(str[i]>='A'&&str[i]<='Z') up = true;
            if(str[i]<'0'||(str[i]>'9'&&str[i]<'A')||(str[i]>'Z'&&str[i]<'a')||str[i]>'z') ex = true;
        }
        
        if(str.length()>=12&&up&&lw&&num&&ex){
            cout << ">> strong\n";
            continue;
        }
        if(str.length()>=8&&up&&lw&&num){
            cout << ">> weak\n";
            continue;
        }
        cout << ">> invalid\n";


    }
    

    return 0;
}