/*
	date: 3/5/2020
	developer: Humphrey Shikoli
	programming language: Java
	algorithm: iterative solution
	program name: Finding nth fibonacci number
*/

import java.util.Scanner;

class fib {
    void fibonacci() {
        Scanner scanner = null;
        try {
            scanner = new Scanner(System.in);
            int n;
            int a = 0, b = 1;
            final int fib1 = 1, fib2 = 2;
            int fib = 0;
            boolean flag = true;
            char c;
            while (flag == true) {
                System.out.println("Enter 's' to find fibonacci or 'q' to quit: ");
                c = scanner.next().charAt(0);
                switch (c) {
                    case 's':
                        System.out.println("Enter the nth fibonacci number: ");
                        n = scanner.nextInt();;
                        if (fib1 == n ) {
                            System.out.println("Fibonacci of " +n +" is: " +a);
                            System.out.println("enter c to contine or s to restart: ");
                            c = scanner.next().charAt(0);;
                            if (c == 'c'){
                                continue;
                            }
                            else if (c == 's') {
                                break;
                            }
                            
                        }
                        else if (fib2 == n) {
                            System.out.println("Fibonacci of " +n +" is " +b );
                            System.out.println("enter c to contine or s to restart: ");
                            c = scanner.next().charAt(0);
                            if (c == 'c'){
                                continue;
                            }
                            else if (c == 's') {
                                break;
                            }	
                        }
                        else if (n <= 0) {
                            System.out.println("invalid entry: enter numbers greater than zero");
                            System.out.println("enter c to contine or s to quit: ");
                            c = scanner.next().charAt(0);
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
                        System.out.println("Fibonacci of " +n +" is: " +fib);
                        System.out.println("enter c to contine or s to quit: ");
                        c = scanner.next().charAt(0);
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
        finally {
            if(scanner != null)
                scanner.close();
        }
        
    }
}  

public class fibonacci_iterative {
    public static void main (final String args[]) {
        final fib f = new fib();
	    f.fibonacci();
    }
}