#include <iostream>
using namespace std;

int digit_sum(int x) {
  int sum = 0;
  while (x > 0) {
    sum += x % 10;
    x /= 10;
  }
  if(sum > 10) digit_sum(sum);
  return sum;
}

int main() {
  int n;
  cin >> n;
  int max_sum = -1;
  int max_number = -1;

  for (int i = 0; i < n; i++) {
    int number; cin >> number;
    int sum = digit_sum(number);
    if (sum >= max_sum) {
      if(max_number < number) {
        max_sum = sum;
      }
      max_sum = sum;
      max_number = number;
    }
  }

  cout<<max_number<<endl;
  return 0;
}
