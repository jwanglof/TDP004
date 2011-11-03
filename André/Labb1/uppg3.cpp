#include <iostream> 
using namespace std; 

bool perNum(int num) 
{ 
  int sum = 1; 

  for (int i = 2; i < num; ++i) 
  { 
    if ((num % i) == 0) 
    { 
      sum += i; 
    } 
  } 
  return (sum == num); 
} 

int main() 
{ 
  cout << "Ange övre gräns: "; 
  int num, purrNum; 
  cin >> num; 
  cout << "Perfekta tal: "; 
  for (int i = 2; i <= num; ++i) 
  { 
    if(perNum(i)) 
    { 
      cout << i << " "; 
    } 
  } 
  cout << endl; 

  return 0; 
}
