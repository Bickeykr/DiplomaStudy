////#include<iostream>
//
//using namespace std;
//
//int main(){
//	char c, lowercase,Uppercase;
//	
//	cout<<"Enter the character";
//	cin>>c;
//	
//	lowercase = (c=="a"||c=="e"||c=="i"||c=="o"||c=="u");
//	Uppercase = (c=="A"||c=="E"||c=="I"||c=="O"||c=="U");
//	
//	
//	if(lowercase||Uppercase){
//		
//		cout<<character<<" is vowel";
//	}else{
//		cout<<character<<" is consonant";
//	}
//}

#include <iostream>
using namespace std;

int main() {
    char c;
    bool isLowercaseVowel, isUppercaseVowel;

    cout << "Enter an alphabet: ";
    cin >> c;

    // evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // show error message if c is not an alphabet
    if (!isalpha(c))
      printf("Error! Non-alphabetic character.");
    else if (isLowercaseVowel || isUppercaseVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";

    return 0;
}
