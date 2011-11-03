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
    vector<int> temp_list,nums;
    string line;
    
    map<char,int> roman;

    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    while (f.good())
    {
      getline(f,line);
      for (int i = 0; i < line.length(); ++i)
      {
        temp_list.push_back(roman[line[i]]);
//        cout << roman[line[i]] << endl;
      }
    }
    f.close();

    for (int i = 0; i < temp_list.size(); ++i)
    {
      if (temp_list[i] > temp_list[i+1])
      {
        cout << temp_list[i] - temp_list[i-1] << endl;
      }
      else
      {
        cout << temp_list[i] << endl;
      }
    }

    //for_each(temp_list.begin(), temp_list.end(), print);

/*    for (list<int>::iterator i = temp_list.begin(); i != temp_list.end(); ++i)
    {
      if (*i > temp_list[)
      {
        cout << *i << endl;
      }
      }*/
  }
  
  

  return 0;
}
