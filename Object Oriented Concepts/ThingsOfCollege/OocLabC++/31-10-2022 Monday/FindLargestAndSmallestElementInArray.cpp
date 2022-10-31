//WAP in C++ to find largest and smallest element in array

#include<iostream>

using namespace std;

int main(){
	
	int arr[10], i, max, min,n; 
	
	cout<<"Enter the size of array\n";
	cin>>n;
	
	cout<<"Enter the value of elements in array\n";
	
	for (i = 0; i < n; i++){
	cin >> arr[i];
	}
	max = arr[0];
	
	for (i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];	
	
		};
	};
	
	min = arr[0];
	for (i=0;i<n;i++){
		if(min>arr[i]){
			min=arr[i];	
	
		};
	};
	cout<<min<<" is the smallest element";
	cout<<max<<" is the largest element";

};
