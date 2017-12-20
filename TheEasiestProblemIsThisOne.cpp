//============================================================================
// Name        : Ezzest_problem.cpp
// Author      : Shabraiz Muhammad
// Version     :
// Copyright   : Your copyright notice
// Description : Ezzest_problem in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

unsigned int sumOfDigits(unsigned int n){
  int sum = 0;

  while(n != 0){
    sum += n%10;
    n /= 10;
  }
  return sum;
}

unsigned int findNumberWithEqualDigitSum(unsigned int number){
  unsigned int numberSum = sumOfDigits(number);
  for(int p=11;  ;p++){
    if  (sumOfDigits(p * number) == numberSum ){
      return p;
    }
  }
  return 0;
}

int main() {
  unsigned int N;
  cin >> N;

  while (N != 0) {
        cout << findNumberWithEqualDigitSum(N) << endl;
    cin >> N;
  }

  return 0;
}
