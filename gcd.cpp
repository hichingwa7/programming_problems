#include<iostream>
using namespace std;
main () {
	int m, n, x, y;
	
	cout<< "Enter the first number: ";
	cin>> n;
	cout<< "Enter the second number: ";
	cin>> m;
	x = n;
	y = m;

	while (x != y) {
		if (x>y) 
			x = x -y;
		else
			y = y - x;
	}
	cout<<endl;
	cout<< "GCD for the numbers is: " <<x;
}