#include<iostream>
#include <string>

using namespace std;

void display(string &str){
	cout<<"Size = " <<str.size()<<"\n";
	cout<<"Length = " <<str.length()<<"\n";
	cout<<"capacity = " <<str.capacity()<<"\n";
	cout<<"Maximum Size = " <<str.max_size()<<"\n";
	cout<<"Empty = " <<(str.empty()? "yes": "no")<<"\n";
	cout<<"\n\n";
}

int main(){
	string str1;
	
	cout<<"Initial status: \n";
	display(str1);
	
	cout<<"Enter a string (One word)\n";
	cin>>str1;
	cout<<"Status now: \n";
	display(str1);
	
	str1.resize(15);
	cout<<"Status after resizing\n";
	display(str1);
	cout<<"\n";
	
	return 0;
	
}
