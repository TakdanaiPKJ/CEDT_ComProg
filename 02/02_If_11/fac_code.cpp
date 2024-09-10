#include"iostream"
#include "string"
using namespace std;

int main(){

    string a;
    cin >> a;
    if(a.length()>2){
        cout<<"Error";
        return 0;
    }
    if(a=="01"||a=="02"){
        cout << "OK";
        return 0;
    }
    if((a[0]-'0'>=2&&a[0]-'0'<=3)&&(a[1]-'0'>=0&&a[1]-'0'<=9)){
        cout << "OK";
        return 0;
    }
    if(a[0]-'0'==4&&a[1]-'0'==0){
        cout <<"OK";
        return 0;
    }
    if(a[0]-'0'==5&&(a[1]-'0'==1||a[1]-'0'==3||a[1]-'0'==5||a[1]-'0'==8)){
        cout << "OK";
        return 0;
    }
    cout<< "Error";
    
    return 0;
}