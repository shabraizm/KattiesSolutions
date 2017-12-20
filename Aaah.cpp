//============================================================================
// Name        : Aaah_Kattis.cpp
// Author      : Shabraiz Muhammad
// Version     :
// Copyright   : Your copyright notice
// Description : Aaah_Kattis in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;

int main() {

  char Patient[1001];
  char Docter[1001];
  cin >> Patient;
  cin >> Docter;
  cout<< (strlen(Patient)< strlen(Docter)?  "no" : "go") << endl;
    return 0;
}
