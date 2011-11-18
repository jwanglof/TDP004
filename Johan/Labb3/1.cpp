#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool biggerThen(char i, char j)
{
  return (i < j);
}

vector<char> readFile(string fileName)
{
  // Open file
  // Loop through the file and add everything to a vector
  // return vector
  vector<char> numberVector;

  ifstream inFile;
  inFile.open(fileName.c_str(), ifstream::in);
  
//  while(! inFile.eof())
  while (inFile.good())
  {
    numberVector.push_back(inFile.rdbuf());
//    cout << (char)inFile.get();
  }
  inFile.close();

  return numberVector;
}
/*
vector<double> readFile2(string fileName)
{
  // Open file
  // Loop through the file and add everything to a vector
  // return vector
  vector<double> numberVector;

  ifstream inFile;
  inFile.open(fileName.c_str(), ifstream::in);
  
  while (inFile.good())
  {
    numberVector.push_back(inFile.rdbuf());
//    cout << (char)inFile.get();
  }
  inFile.close();

  return numberVector;
}
*/
void saveNewFile(string fileName)
{
  ifstream file1(fileName.c_str(), fstream::binary);
  ofstream file2((fileName.c_str()), ofstream::trunc|ofstream::binary);
  file2 << file1.rdbuf();
}

int main()
{
  string fileName;
  vector<char> asd;
  vector<double> asd2;
  int dataChoice;

  cout << "1. Sort data \n2. Read data \nChoose an alternative: ";
  cin >> dataChoice;

  switch (dataChoice)
  {
    case 1:
    {
      cout << "What text-file do you want to sort?" << endl;
      cin >> fileName;
//      readFile(fileName);
//      saveNewFile(fileName);
      asd = readFile(fileName);
//      stable_sort(asd2.begin(), asd2.end());

/*      ifstream inFile;
      inFile.open(fileName.c_str(), ifstream::in);
      
      while (inFile.good())
      {
        asd2.push_back(inFile.rdbuf());
      }*/

      // It works fine if I don't use the sort-function.
      // Perhaps it has something to do with char..?
      for (vector<char>::iterator it = asd.begin(); it != asd.end(); ++it)
      {
        cout << *it << endl;
        }

      break;
    }
    case 2:
    {
      cout << 2 << endl;
      break;
    }
    default:
    {
      cout << "Unknown choice. Please try again" <<  endl;
      break;
    }
  }
}
