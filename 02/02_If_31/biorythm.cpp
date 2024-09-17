#include "bits/stdc++.h"
using namespace std;

vector <int > vt ={31,29,31,30,31,30,31,31,30,31,30,31};

int main(){

  int d1,m1,y1;
  int d2,m2,y2;
  int ans = 0;
  cin >> d1 >> m1 >> y1;
  cin >> d2 >> m2 >> y2;
  y1 -= 543;
  y2 -= 543;
  ans += (y2-y1-1)*365;
  int tmp =0;
  if( y1%4!=0 || (y1%100==0 && y1%400!=0)) vt[1] = 28;
  for(int i=0;i<m1-1;i++){
    tmp+=vt[i];
  }
  tmp += d1;
  ans += (vt[1]==28 ? 366-tmp : 367-tmp);
  tmp =0;
  if( y2%4!=0 || (y2%100==0 && y2%400!=0)) vt[1] = 28;
  else vt[1] = 29;
  for(int i=0;i<m2-1;i++){
    tmp+=vt[i];
  }
  tmp += d2;
  ans += tmp-1; 
  double a,b,c;
  a = sin((2*M_PI*ans)/23);
  b = sin((2*M_PI*ans)/28);
  c = sin((2*M_PI*ans)/33);
  
  cout << ans << " " << round(a*100.0)/100.0 <<  " " << round(b*100.0)/100.0 <<  " " << round(c*100.0)/100.0 ;

  return 0;
}
