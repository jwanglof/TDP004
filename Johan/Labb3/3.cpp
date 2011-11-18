#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string askedWord;
  string currentNumber;
  vector<int> intVector;
  int sum;

  cout << "Type a string including both letters and numbers: ";
  getline(cin, askedWord);

  for (int i = 0; i < askedWord.size(); ++i)
  {
    if (isdigit(askedWord[i]))
    {
      currentNumber += askedWord[i];
    }
    else if (currentNumber.size() > 0)
    {
      stringstream ss(currentNumber);
      
      int number;
      
      ss >> number;
      intVector.push_back(number);
      currentNumber = "";
    }
  }

  if (currentNumber.size() > 0)
  {
    stringstream ss(currentNumber);
      
    int number;
    
    ss >> number;
    intVector.push_back(number);
  }

  vector<int>::iterator it;
  for (it = intVector.begin(); it != intVector.end(); ++it)
  {
    sum += *it;
  }
  
  cout << sum << endl;

  return 0;
}
