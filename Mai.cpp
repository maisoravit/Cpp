// #include <iostream>

// int main() {

//   std::cout << "1\n";
//   std::cout << "2\n";
//   std::cout << "3\n";

// }

#include <iostream>
using namespace std;

int main() {

  int year;

  cout << "Enter a year: ";
  cin >> year;
  int sum = year-543;
  cout << sum << "\n";
if (sum % 4 == 0) {
    if (sum % 100 == 0) {
      if (sum % 400 == 0) {
        cout << sum << " is a leap year.";
      }
      else {
        cout << sum << " is not a leap year.";
      }
    }
    else {
      cout << sum << " is a leap year.";
    }
  }
  else {
    cout << sum << " is not a leap year.";
  }

  return 0;
}
