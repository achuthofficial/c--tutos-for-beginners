//variables
/*
synatx: type variablename = value
types are : int 
			double
			char
			String
			bool
*/
#include <iostream>

using namespace std;

int main(){
	int MyNum = 10;
	cout << MyNum << endl; // 10 will be printed
	int MyNum1 = 11;
	MyNum1 = 13;
	cout << MyNum1 << endl; // here we assign the mynum1 as 13 again so it will overwrite the intial value
	// other types declaration
	int num = 10;
	double num1 = 12.345;
	char lett = 'a';
	bool iscorrect = true;
	//adding two numbers with variables 
	int a = 10;
	int b = 20;
	cout << "the sum of "<< a <<" and " << b << " is " << a+b << endl;
	// declaring the multiple variables
	int x = 10 , y = 11 , z = 12;
	cout << "sum of x y z is " << x+y+z << endl;
	return 0;	
}
