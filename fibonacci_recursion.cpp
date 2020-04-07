/* 
   date: 3/5/2020
	developer: Humphrey Shikoli
	programming language: C++
	algorithm: recursive solution
   time complexity: T(n) = T(n-1) + T(n-2) which is exponential
   space complexity: O(n) if we consider the function call stack size, otherwise O(1)
	program name: Finding nth fibonacci number

*/

#include<iostream>

int fib(int n) 
{ 
   if (n == 1) {
      return 0;
   }
   else if (n == 2) {
      return 1;
   }
   else {
      return fib(n-1) + fib(n-2);
   }
} 
  
int main () 
{ 
  int n = 0;
  std::cout<<"Enter the fibonacci number: ";
  std::cin>>n;
  std::cout<<std::endl;
  if (n <= 0) {
     std::cout<< "Wrong input";
  }
  else {
     std::cout<<"fibonacci of " <<n <<" is: " <<fib(n);
  }
  return 0;
}