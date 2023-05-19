#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool is_prime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
   int num_test_cases;
  cin >> num_test_cases;
  for (int i = 0; i < num_test_cases; i++) {
    int n;
    cin >> n;
    if (is_prime(n)) {
      cout << "Prime" << endl;
    } else {
      cout << "Not prime" << endl;
    }
  }
  return 0;  
    return 0;
}
