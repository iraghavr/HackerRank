# Lonely Integer

Consider an array of n integers, A = [a1,a2,a3,...,an], where all but one of the integers occur in pairs. In other words, every element in occurs exactly twice except for one unique element.

Given A, find and print the unique element.

Input Format

The first line contains a single integer, n, denoting the number of integers in the array.
The second line contains n space-separated integers describing the respective values in A.

Constraints

1 <=n < 100

It is guaranteed that n is an odd number. 

0 <= ai <= 100 where 0 <= i < n

Print the unique number that occurs only once in on a new line.

Sample Input

5
1 1 3 7 3

Sample Output

7

Explanation

We have two 1's, two 3's, and one 7. We print 7, because that's the only unique element in the array.