#include "iostream"
#include "queue"
using namespace std;

bool solve() {
  int n, cnt = 0;
  queue<int> q;
  cin >> n;
  for (int i = 2; i <= n; i++) {
    if (n % i != 0) {
      continue;
    }
    while (n % i == 0) {
      n /= i;
      cnt++;
    }

    for (int j = 0; j < cnt; j++) {
      q.push(i);
    }
    cnt = 0;
  }
  while (true) {
    cout << q.front();
    q.pop();
    if (q.empty())
      break;
    cout << "*";
  }
}

int main() {

  int n, cnt = 0;
  queue<int> q;
  cin >> n;
  for (int i = 2; i <= n; i++) {
    if (n % i != 0) {
      continue;
    }
    while (n % i == 0) {
      n /= i;
      cnt++;
    }

    for (int j = 0; j < cnt; j++) {
      q.push(i);
    }
    cnt = 0;
  }
  while (true) {
    cout << q.front();
    q.pop();
    if (q.empty())
      break;
    cout << "*";
  }
}
