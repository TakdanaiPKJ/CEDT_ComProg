#include "bits/stdc++.h"
using namespace std;

int main(){

  double r,l=0;
  double a;
  cin >> a;
  r=a;
  
  while(r>l){
    double x = (r+l)/2;
    
    if(abs(a-pow(x,2)) <= 10e-10*max(a,pow(x,2))){
      cout << x;
      return 0;
    }

    if(pow(x,2) > a){
      r = x;
    }
    else if(pow(x,2) < a){
      l = x;
    }
  }


  return 0;
}

