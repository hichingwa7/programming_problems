/*
	date: 3/5/2020
	developer: Humphrey Shikoli
	programming language: C++
	algorithm: iterative solution
	program name: Finding nth fibonacci number
*/

#include <iostream>

void fibonacci();

void fibonacci() {
	using namespace std;
	int n = 0, a = 0, b = 1;
	int fib1 = 1, fib2 = 2;
	int fib = 0;
	bool flag = true;
	char c;
	while (flag == true) {
		cout<<"Enter 's' to find fibonacci or 'q' to quit: ";
		cin>>c;
		switch (c) {
			case 's':
				cout<<"Enter the nth fibonacci number: ";
				cin>>n;
				if (fib1 == n ) {
					cout<<"Fibonacci of " <<n <<" is " <<a <<endl;
					cout<<"enter c to contine or s to restart: ";
					cin>>c;
					if (c == 'c'){
						continue;
					}
					else if (c == 's') {
						break;
					}
					
				}
				else if (fib2 == n) {
					cout<<"Fibonacci of " <<n <<" is " <<b <<endl;
					cout<<"enter c to contine or s to restart: ";
					cin>>c;
					if (c == 'c'){
						continue;
					}
					else if (c == 's') {
						break;
					}	
				}
				else if (n <= 0) {
					cout<<"invalid entry: enter numbers greater than zero" <<endl;
					cout<<"enter c to contine or s to quit: ";
					cin>>c;
					if (c == 'c'){
						continue;
					}
					else if (c == 's') {
						break;
					}
				}
				else {
					for (int i = 3; i <= n; i++) {
						fib = a + b;
						a = b;
						b = fib;
					}
				cout<<"Fibonacci of " <<n <<" is: " <<fib <<endl;
				cout<<"enter c to contine or s to quit: ";
				cin>>c;
				if (c == 'c'){
					fibonacci();
				}
				else if (c == 's') {
					break;
				}
				}
				break;
			case 'q':
				flag = false;
				break;
			default:
				break;
			}	
	}
}
int main () {
	fibonacci();
	return 0;
}