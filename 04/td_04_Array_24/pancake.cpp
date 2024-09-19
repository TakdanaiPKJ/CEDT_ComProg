#include "bits/stdc++.h"
using namespace std;

int arr[10000];
priority_queue <int> pq;

int main(){

    int n;
    int maxx=INT_MIN;
    cin >> n;

    for(int i=1;i<=n;i++){
        cin >> arr[i];
        pq.push(arr[i]);
    }
    int cnt = 0;
    //cout << pq.size();

    for(int i=1;i<=n;i++){
            cout << arr[i] << " " ;
        }
        cout << endl;

    while (!pq.empty()){
       

        if(arr[n-cnt] == pq.top()){
            //cout << "A";
            cnt ++;
            pq.pop();
            continue;
        }
        else if(arr[1] == pq.top()){

            for(int i=1;i<=n/2;i++){
                if(i==n-cnt) break;
                swap(arr[i],arr[n-i-cnt+1]);
            }   
            //cout << "A"<< pq.top();
            cnt ++ ;
            pq.pop();

        }
        else {

            for(int i=2;i<=n-cnt;i++){

                if(arr[i]==pq.top()){

                    for(int j=1;j<=i/2;j++){
                        swap(arr[j],arr[i-j+1]);
                    }
                    
                }

            }
            
        }
        

        //pq.pop();
        for(int i=1;i<=n;i++){
            cout << arr[i] << " " ;
        }
        cout << endl;
        //cout << pq.top() << cnt << endl;
        //if(cnt==0) break;
    }
    

    return 0;
}
