//Write a program in c++ using class to find sum of two numbers

#include <iostream>
using namespace std;

class Add {
  int x, y;

public:
  void input() {
    cout << "Input two integers\n";
    cin >> x >> y;
  }

  void add() {
    cout << "Result: " << x + y;
  }
  
  Add(){
  	cout<<"This is a constructor";
  }

};

int main()
{
   Add a; // Creating an object of the class

   a.input();
   a.add();

   return 0;
}
