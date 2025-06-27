#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number of sides of the polygon:";
  cin >> n;
  if (n == 3)
  {
    cout << "The polygon is a Triangle." << endl;
  }
  else
  {
    cout << "The polygon is not a Triangle." << endl;
  }
}