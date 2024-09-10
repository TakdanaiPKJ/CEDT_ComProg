#include "bits/stdc++.h"
using namespace std;

int arr[50];

int main(){

    string str;
    getline(cin>>ws,str);
    transform(str.begin(), str.end(), str.begin(), ::tolower); 

    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])){
            arr[str[i]-'a'] ++;
        }
    }

    for(int i=0;i<26;i++){
        if(arr[i]!=0) printf("%c -> %d\n",i+'a',arr[i]);
    }
    
    return 0;
}
