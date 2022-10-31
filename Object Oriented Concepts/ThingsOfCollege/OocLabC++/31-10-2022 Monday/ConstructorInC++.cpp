//Write a program in c++ using class to find sum of two numbers

#include <iostream>
using namespace std;

class Add {
  int x, y;
  public:
  
  int method(){
  	cout<<"This is a method\n";
  }
  
  Add()
  {
  	cout<<"This is a constructor\n";
  }

		 };

int main()
{
   Add a; // Creating an object of the class
   a.method();
   return 0;
}
