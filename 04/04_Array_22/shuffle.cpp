#include "bits/stdc++.h"
using namespace std;

vector <string> card;
queue <string> q1;
queue <string> q2;
int cs;

int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string a;
        cin >> a;
        card.push_back(a);
    }
    cs = card.size();
    string comm; //cin.ignore();
    getline(cin.ignore(),comm);
    //cout << card.size();
    for(int i=0;i<comm.length();i++){
        for(int j=0;j<card.size();j++){
            if(j<card.size()/2) q1.push(card[j]);
            else q2.push(card[j]);
        }
        if(comm[i]=='C'){
            card.clear();
            while (!q2.empty()){
                card.push_back(q2.front());
                q2.pop();
            }
            while (!q1.empty()){
                card.push_back(q1.front());
                q1.pop();
            }
            while (!q1.empty()&&!q2.empty()){
                q1.pop();
                q2.pop();
            }
        }
        else if(comm[i]=='S'){
            //int cs = card.size();
            card.clear();
            for(int j=0;j<cs;j++){
                if(j%2==0){
                    card.push_back(q1.front());
                    q1.pop();
                }
                else {
                    card.push_back(q2.front());
                    q2.pop();
                }
            }
            while (!q1.empty()&&!q2.empty()){
                q1.pop();
                q2.pop();
            }
            
        }
    }

    for(auto x:card){
        cout << x << " ";
    }



    return 0;
}
