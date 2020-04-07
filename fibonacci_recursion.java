/* 
    date: 3/5/2020
    developer: Humphrey Shikoli
	programming language: Java
	algorithm: recursive solution
    time complexity: T(n) = T(n-1) + T(n-2) which is exponential
    space complexity: O(n) if we consider the function call stack size, otherwise O(1)
	program name: Finding nth fibonacci number

*/
import java.util.Scanner;

class fibonacci_recursion {

    static int fib(final int n) {
        if (n == 1){
            return 0;
        }
        else if (n == 2) {
            return 1;
        }
        else {
            return fib(n-1) + fib(n-2);
        }      
    }
    public static void main(final String args[]) {
        int n;
        Scanner scanner = null;
        try {
            System.out.println("Enter the nth fibonacci number: ");
            scanner = new Scanner(System.in);
            n = scanner.nextInt();
            if (n <= 0) {
                System.out.println("Wrong input");
            }
            else {
                System.out.println("Fibonacci of " +n +" is: " +fib(n));
            } 
        }
        finally {
            if (scanner != null) {
                scanner.close();
            }   
        }
    }
}