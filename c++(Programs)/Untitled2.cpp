//reference variable
#include <iostream>

using namespace std;

int squareByValue(int ); //function prototype (pass-by-value)
void squareByReference(int &); //function prototype (pass-by-reference)

int main()
{
  int x = 2; 
  int z = 4;
  
  cout << "x = " << x << " before squareByValue\n";
  cout << "value returned by squareByValue: "
    << squareByValue(x) << endl;
    
  cout << "After squareByValue x = " << x << endl;
  cout << "z= " << z << " before squareByReference\n";
  
  squareByReference(z);
  
  cout << "After squareByReference z = " << z << endl;

  return 0;
}
int squareByValue(int number)
{
  return number *= number;
}
void squareByReference(int & numberRef)
{
  numberRef *= numberRef; //caller’s argument modified
}


