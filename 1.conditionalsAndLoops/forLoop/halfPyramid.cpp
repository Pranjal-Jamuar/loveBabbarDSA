#include <iostream>
using namespace std;

int main()
{
  int rows;
  cout << "Enter the number of rows:";
  cin >> rows;

  for (int i = 0; i < rows; i = i + 1)
  {
    for (int j = 0; j < i + 1; j = j + 1)
    {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
}