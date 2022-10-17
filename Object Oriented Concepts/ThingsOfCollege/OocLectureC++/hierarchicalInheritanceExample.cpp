#include <iostream>
using namespace std;

class Department {
	public: //access modifier 
	int noOfDepartment; //Data members
 	
	void getDepartment(){
		cout<<"Enter the no of Department:";
		cin>>noOfDepartment;
	}
	
	void showDepartment(){
		cout<<"No of departmen is" <<noOfDepartment;
	}
	
	
};


class Diploma : public Department 
{
	public:
		int noOfStudent;
		
		void getDiplomaDetail(){
		cout<<"Enter the no of students in Diploma:";
		cin>>noOfStudent;
		}
	void showDiplomaDetail(){
				cout<<"the no of students in Diploma:" <<noOfStudent;

		}
};
	
class computerApplication : public Department 
{
	public:
		int noOfStudentInComputerApplication;
		
		void getCADetail(){
		cout<<"Enter the no of students in Computer Application:";
		cin>>noOfStudentInComputerApplication;
		}
	void showDiplomaDetail(){
				cout<<"the no of students in Computer Application are" <<noOfStudentInComputerApplication;

		}
};

class BCA : public computerApplication 
{
	public:
		int noOfStudentInBCA;
		
		void getBCADetail(){
		cout<<"Enter the no of students in BCA:";
		cin>>noOfStudentInBCA;
		}
	void showDiplomaDetail(){
				cout<<"the no of students in BCA are" <<noOfStudentInBCA;

		}
};


int main()
{
	Diploma D1;
	
	D1.getDepartment();
	D1.showDepartment();
}

//Note: noOfDepartment and noOfStudents are Data members
// : <- Relationship between base and child class
