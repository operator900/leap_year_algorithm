#include <iostream>

using namespace std;

int main() {
  
  int year;
  cout << "Enter a year to see if it's a leap year: ";
  cin >> year;

  if(!((year % 4) == 0)) {
    cout << "It is not a leap year!\n";
  }
  else if(!((year % 100) == 0)) {
    cout << "It's a leap year!\n";
  }
  else if(!((year % 400) == 0)) {
    cout << "It's not a leap year!\n";
  }
  else {
    cout << "It's a leap year!\n";
  }
  
}
