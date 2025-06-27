#include <iostream>
using namespace std;

int main()
{
  int num;

  cout << "Enter the number:";
  cin >> num;

  if (num > 0)
  {
    cout << "The number entered is positive.";
  }
  else if (num < 0)
  {
    cout << "The number entered is negative.";
  }
  else if (num == 0)
  {
    cout << "The number entered is zero.";
  }

  return 0;
}