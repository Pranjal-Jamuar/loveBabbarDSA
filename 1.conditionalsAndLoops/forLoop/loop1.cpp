#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i <= 11; i = i + 1)
  {
    cout << "Pranjal Jamuar";
    cout << endl;
  }

  for (int j = 1; j <= 10; j = j + 1)
  {
    cout << "19 x " << j << " = " << 19 * j;
    cout << endl;
  }

  for (int k = 1; k <= 100; k = k + 1)
  {
    if (k % 2 == 0)
    {
      cout << k << endl;
    }
  }
}