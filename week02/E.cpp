#include <iostream>

using namespace std;

int fib(int n) {
  if (n == 0 or n == 1) {
    return 1;
  }
  int a = 1;
  int b = 1;
  int c;
  for (int i = 2; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  return c;
}

int main() {
  int n;
  cin >> n;
  int result = fib(n);
  cout << result << endl;
  return 0;
}