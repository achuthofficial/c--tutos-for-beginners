/*
c++ taking the user input 
"cin" is used for taking the user input 
with the help of variables
"cin" => prounced as see-in => syntax is cin >> variable name 
*/

#include <iostream>

using namespace std;

int main(){
	cout << "type a number" << endl;
	int x;
	cin >> x;
	cout << " the numbers is" << x << endl;
	// creating a simple calculator with two variables
	int a ;
	int b ;
	cout << " enter a number" << endl;
	cin >> a ;
	cout << "enter another number" << endl;
	cin >> b ;
	cout << "the sum is            "<< a+b << endl;
	cout << "the difference is     "<< a-b << endl;
	cout << "the multiplication is "<< a*b << endl;
	cout << "the divison is        "<< a/b << endl;
	
	return 0;
}
