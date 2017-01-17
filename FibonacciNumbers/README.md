# Fibonacci Numbers

The Fibonacci Series

The Fibonacci sequence begins with and . These are the first and second terms, respectively. After this, every element is the sum of the preceding elements:

Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)  

Task

Given the starter code, complete the Fibonacci function to return the Nth term.

We start counting from Fibonacci(1) = 0. This might differ from some other notations that treats Fibonacci(0) = 0.

The overall equation is:

             = 0 , n = 1
Fibonacci(n) = 1 , n = 2
               Fibonacci(n-1) + Fibonacci(n-2)  , n > 2

Input Format

One line of input, the integer N.

Constraints

0 < N <= 40

Output Format

Output one integer, the Nth Fibonacci number. 

Sample Input

3  

Sample Output

1  