#include <iostream>
using namespace std;

int main()
{
  int rows;
  cout << "Enter the number of rows:";
  cin >> rows;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}