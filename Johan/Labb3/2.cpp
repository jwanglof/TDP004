#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

bool fileExist(string fileName)
{
  ifstream inFile;
  inFile.open(fileName.c_str(), fstream::in);

  if (inFile.good())
  {
    inFile.close();
    return true;
  }
  else
    return false;
}

bool findTextInString(string findText, string fromString)
{
  if (fromString.find(findText) != string::npos)
    return true;
  else
    return false;
}

int main()
{
  string fileName;
  string askedWord;
  string lines;
  string line;

  cout << "What file do you want to open?" << endl;
  cin >> fileName;

  if (fileExist(fileName))
  {
    cout << "What word do you want to look for?" << endl;
    cin >> askedWord;

    ifstream inFile;
    inFile.open(fileName.c_str(), fstream::in);

    while (getline(inFile, lines))
    {
      if (findTextInString(askedWord, lines))
        cout << lines << endl;
    }
  }
  else
  {
    cout << "The file does not exist." << endl;
  }

  return 0;
}
