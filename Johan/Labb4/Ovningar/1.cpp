#include <iostream>
using namespace std;

int main()
{
  int number;
  int *intPointer;

  intPointer = &number;

  number = 33;

  cout << number << endl;
  cout << intPointer << " " << *intPointer << endl;
  cout << &number << " " << number << endl;

  // Dynamic memory assignment
  int *dynamicInt = new int(23);
  cout << dynamicInt << " " << *dynamicInt << endl;
  delete dynamicInt, intPointer;

  return 0;
}
