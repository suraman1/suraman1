#include<iostream>
using namespace std;
int main( ) {
 unsigned	int num;
	line:
	cout<<"enter a number  "<<endl;
	cin>>num;
	int factorial=1;
	if (cin.fail ()){
		cin.clear ();
		cin.ignore();
		cout<<"Please try again "<<endl;
		goto in;
		}
	if (num ==0 ){
		cout<<"Factorial = "<<factorial<<endl;
		}
	else {
	in:
	while(num>0 ){
		for(num>0; num>=1; num--  ){
			factorial*=num;
		}
	cout<<"Factorial = "<<factorial<<endl;
	
	}
	}
	goto line;
	
	return 0;
	}