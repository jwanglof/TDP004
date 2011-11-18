#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
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

  vector<string> user_input;
  vector<char> roman_v;
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
  
  for (int i = 0; i < user_input.size(); ++i)
  {
    for (int o = 0; o < user_input[i].size(); ++o)
    {
      int real_roman_number = roman_numbers[user_input[i][o]];
      int real_roman_number_next = roman_numbers[user_input[i][o+1]];
      roman_v.push_back(user_input[i][o]);

/*
  This will return the sum
      if (real_roman_number_next > real_roman_number)
      {
        all_numbers.push_back(real_roman_number_next - real_roman_number);
        user_input[i].erase(o);
      }
      else
      {
        all_numbers.push_back(real_roman_number);
      }
*/
    }
  }

  sort(roman_v.begin(), roman_v.end(), return_roman);
  for (int i = 0; i < roman_v.size(); ++i)
  {
    cout << roman_v[i];
/*
  Part of the sum
  sum_of_all_numbers += all_numbers[i];
*/
  }

  return 0;
}
