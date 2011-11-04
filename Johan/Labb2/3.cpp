#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

bool return_roman(int x, int y)
{
  map<char,int> roman_numbers;

  roman_numbers['I'] = 1;
  roman_numbers['V'] = 5;
  roman_numbers['X'] = 10;
  roman_numbers['L'] = 50;
  roman_numbers['C'] = 100;
  roman_numbers['D'] = 500;
  roman_numbers['M'] = 1000;

  return (roman_numbers[x] < roman_numbers[y]);
}

int main()
{
  map<char,int> roman_numbers;

  roman_numbers['I'] = 1;
  roman_numbers['V'] = 5;
  roman_numbers['X'] = 10;
  roman_numbers['L'] = 50;
  roman_numbers['C'] = 100;
  roman_numbers['D'] = 500;
  roman_numbers['M'] = 1000;

//  vector<string> user_input;
  list<string> user_input;
  list<char> roman_v;
  vector<int> real_numbers,all_numbers;
  int sum_of_all_numbers;
  string x;

  while(x != "q")
  {
    cout << "Type a roman number (q to quit): ";
    cin >> x;
    if (x != "q")
      user_input.push_back(x);
  }
  
  for (list<string>::iterator i = user_input.begin(); i != user_input.end(); ++i)
  {
    for (string::iterator o = (*i).begin(); o < (*i).end(); ++o)
    {
      int real_roman_number = roman_numbers[*o];
      int real_roman_number_next = roman_numbers[*o];
      roman_v.push_back(*o);
//      cout << *o << endl;
    }
  }

//  sort(roman_v.begin(), roman_v.end(), return_roman);
  roman_v.sort();
//  for (int i = 0; i < roman_v.size(); ++i)
  for (list<char>::iterator i = roman_v.begin(); i != roman_v.end(); ++i)
  {
    cout << *i;
  }
  cout << endl;

  return 0;
}
