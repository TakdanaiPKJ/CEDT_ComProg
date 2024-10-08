#include "bits/stdc++.h"
using namespace std;

int main() {

  double x;
  cin >> x;
  cout << fixed << setprecision(1)
       << sqrt(pow(x, 2) + pow(cos(x * (M_PI / 180)), 2)) /
              (sin(x * (M_PI / 180)) +
               (pow(cos(x * (M_PI / 180)), 3)) / (pow(x, 2) + 1));
  ;

  return 0;
}
