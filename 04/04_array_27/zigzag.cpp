#include "bits/stdc++.h"
using namespace std;

int x[99999];
int y[99999];

int main() {

  int zig;
  int i;
  int minn = INT_MAX;
  int maxx = INT_MIN;

  int n;
  cin >> n;
  
  for (i = 1;i<=n;i++) {
    int a , b;
    cin >> a;
    cin >> b;
    x[i] = a;
    y[i] = b;
  }
  string a;
  cin >> a;
  if (a == "Zig-Zag") {
    for (int j = 1;j < i;j++) {
      minn = min(minn , j % 2 != 0 ? x[j] : y[j]);
      maxx = max(maxx , j % 2 != 0 ? y[j] : x[j]);
    }
  }
  else if (a == "Zag-Zig") {
    for (int j = 1;j < i;j++) {
      maxx = max(maxx , j % 2 != 0 ? x[j] : y[j]);
      minn = min(minn , j % 2 != 0 ? y[j] : x[j]);
    }
  }
  printf("%d %d" , minn , maxx);

  return 0;
}
