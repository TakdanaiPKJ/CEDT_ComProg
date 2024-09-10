#include "bits/stdc++.h"
using namespace std;

queue <int > q;

int main(){

    int n;
    cin >> n;

    while(n!=1){
        q.push(n);
        if(n%2==0){
            n /= 2;
        }
        else{
            n = n*3 + 1;
        }
    }
    q.push(1);
    while (q.size()>15){
        q.pop();
    }

    while (!q.empty()){
        cout << q.front() << (q.front()==1 ? "" : "->");
        q.pop();
    }
    
    

    return 0;
}
