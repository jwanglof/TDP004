#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

void print(int i)
{
  cout << i;
}

int main()
{
  ifstream f ("ROMERSKA");

  if (f.is_open())
  {
    vector<int> real_numbers,all_numbers;
    string line;
    int sum_of_all_numbers;
    map<char,int> roman_numbers;

    roman_numbers['I'] = 1;
    roman_numbers['V'] = 5;
    roman_numbers['X'] = 10;
    roman_numbers['L'] = 50;
    roman_numbers['C'] = 100;
    roman_numbers['D'] = 500;
    roman_numbers['M'] = 1000;

    while (f.good())
    {
      getline(f,line);
      for (int i = 0; i < line.length(); ++i)
      {
        /* This would work but I don't know how to discard a number I've already taken
        if (roman_numbers[line[i+1]] > roman_numbers[line[i]])
        {
          cout << roman_numbers[line[i+1]] - roman_numbers[line[i]] << endl;
        }
        else
        {
          cout << roman_numbers[line[i]] << endl;
          }*/
        real_numbers.push_back(roman_numbers[line[i]]);
      }
    }

    f.close();
    
    for (int i = 0; i < real_numbers.size(); ++i)
    {
      if (real_numbers[i+1] > real_numbers[i])
      {
        all_numbers.push_back(real_numbers[i+1] - real_numbers[i]);
        real_numbers.erase(real_numbers.begin());
      }
      else
        all_numbers.push_back(real_numbers[i]);
    }
      
    for (int i = 0; i < all_numbers.size(); ++i)
    {
      sum_of_all_numbers += all_numbers[i];
    }
    cout << sum_of_all_numbers << endl;
  }

  return 0;
}
