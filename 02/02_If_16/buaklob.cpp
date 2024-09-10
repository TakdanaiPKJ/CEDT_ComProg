#include "iostream"
using namespace std;

int main(){

    int n;
    cin >> n;

    if(n>0){
        cout << ((n%2==0) ? "positive\neven" : "positive\nodd"); 
    }
    else if(n<0){
        cout << ((n%2==0) ? "negative\neven" : "negative\nodd"); 
    }
    else {
        cout << ((n%2==0) ? "zero\neven" : "zero\nodd");
    }

    return 0;
}
