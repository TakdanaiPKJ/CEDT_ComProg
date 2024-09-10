#include "bits/stdc++.h"
using namespace std;

struct lft{
    int nums;
    int st;
    int en;
    int des;
};

struct ans{
    int dis;
    int numl;
    bool operator < (const ans &x) const{
		if(x.dis == dis ) return x.numl < numl;
        else return x.dis < dis;
    }
};

bool compareInterval(lft i1, lft i2) 
{ 
    return (i1.nums < i2.nums); 
} 

vector <lft> vt;

int main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin >> a >> b >> c;
        if(b>c) vt.push_back({a,c,b,c});
        else vt.push_back({a,b,c,c});
    }
    int m;
    cin  >> m;
    sort(vt.begin(),vt.end(),compareInterval);
    for(int i=0;i<m;i++){
        int a,b;
        //priority_queue < pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        priority_queue <ans> df;
        cin >> a >> b;
        pair <int,int> p = {INT_MAX,INT_MAX};
        for(int j=0;j<n;j++){

            if(a>=vt[j].st&&a<=vt[j].en){
                
                if(p.first> abs(vt[j].des-b) ){
                    p.second = vt[j].nums;
                    p.first = abs(vt[j].des-b);
                    df.push({abs(vt[j].des-b),vt[j].nums});
                }
            }
            else {
                int tmp = abs(vt[j].des-a)+abs(b-a);
                
                if(p.first>=tmp){
                    p.first = tmp;
                    p.second = vt[j].nums;
                    df.push({tmp,vt[j].nums});
                }
            }

        }
        
        cout << ">> "<< df.top().numl << "\n";
        //df.clear();
    }


    return 0;
}
