#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool myfunction(float i, float j) { return (i < j); }

bool checkFileExist(string fileName)
{
  ifstream fileExist;
  fileExist.open(fileName.c_str(), fstream::in);

  if(fileExist.good())
  {
    fileExist.close();
    return true;
  }
  return false;
}

int main()
{
  int switchChoice;
  string fileName;
  string newFileName;

  vector<float> dataFromFile;
  float numbers;

  cout << "Choose an option: \n1. Open a file and sort the data \n2. Open a file and see the content \nYour choice: ";
  cin >> switchChoice;

  switch (switchChoice)
  {
    case 1:
    {
      cout << "What file do you want to open? \n";
      cin >> fileName;

      if (checkFileExist(fileName))
      {
          string newFileName;
          newFileName = fileName + ".sort";
          
          ifstream inFile(fileName.c_str(), fstream::in | fstream::binary);
          ofstream outFile(newFileName.c_str(), ofstream::trunc | ofstream::binary);

          while (true)
          {
            inFile >> numbers;
            if (inFile.eof())
              break;
            dataFromFile.push_back(numbers);
          }
          inFile.close();
          
          sort(dataFromFile.begin(), dataFromFile.end(), myfunction);

          vector<float>::iterator it;
          for (it = dataFromFile.begin(); it != dataFromFile.end(); ++it)
            outFile << *it << endl;
      }
      else
        cout << "The file does not exist." << endl;
      break;
    }

    case 2:
    {
      cout << "What file do you want to read? \n";
      cin >> fileName;

      if (checkFileExist(fileName))
      {
        ifstream inFile(fileName.c_str(), fstream::in);

        while (true)
        {
          inFile >> numbers;
          if (inFile.eof())
            break;
          cout << numbers << endl;
        }
      }
      break;
    }

    default:
    {
      break;
    }
  }
  
  return 0;
}
