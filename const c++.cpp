// const keyword
/*
we should always declare the variable as a const 
when you have a value that are unlikely to change
*/
#include <iostream>

using namespace std;

int main(){
	const int num = 10;// num always be 10
	num = 11;// error : assignment of read-only variable 'num'
	
}
