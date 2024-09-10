#include "bits/stdc++.h"
using namespace std;

vector<int > s1;
vector<int > s2;
vector<int > s3;

list <int > ans;

int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        s1.push_back(a);
    }
    string a,tmpa="";
    if(n!=10){
        getline(cin>>ws,a);
        for(auto x: a){
            if(isdigit(x)){
                tmpa+=x;
            }
            else{
                s2.push_back(stoi(tmpa));
                tmpa = "";
            }
        }
        s2.push_back(stoi(tmpa));
    } 

    

    int ip;
    cin >> ip;
    while (ip != -1){
        
        //if(ip == -1) break;
        s3.push_back(ip);
        cin >> ip;
    }
    int cnt =0;
    for(int i=0;i<s1.size();i++,cnt++){
        if(cnt%2==0) ans.push_back(s1[i]);
        else ans.push_front(s1[i]);
    }
    
    for(int i=0;i<s2.size();i++,cnt++){
        if(cnt%2==0) ans.push_back(s2[i]);
        else ans.push_front(s2[i]);
    }
    
    for(int i=0;i<s3.size();i++,cnt++){
        if(cnt%2==0) ans.push_back(s3[i]);
        else ans.push_front(s3[i]);
    }

    cout << "[";
    int tmpans = ans.back();
    for(auto x: ans){

        cout << x << (x == tmpans ? "" : ", ");
        //cout << x << " ";
    }
    cout << "]";

    return 0;
}
