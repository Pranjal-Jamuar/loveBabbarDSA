#include <iostream>
using namespace std;

int main()
{
  int numOfSides;
  cout << "Enter the number of sides of the polygon:";
  cin >> numOfSides;

  if (numOfSides == 3)
  {
    cout << "It is a Triangle." << endl;
  }
  else if (numOfSides == 4)
  {
    cout << "It is a Rectangle." << endl;
  }
  else if (numOfSides == 5)
  {
    cout << "It is a Pentagon." << endl;
  }
  else
  {
    cout << "Some other Polygon." << endl;
  }

  return 0;
}