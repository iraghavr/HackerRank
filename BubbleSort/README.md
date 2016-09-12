Check out the resources on the page's right side to learn more about bubble sort. The video tutorial is by Gayle Laakmann McDowell, author of the best-selling interview book Cracking the Coding Interview.

Consider the following version of Bubble Sort:

for (int i = 0; i < n; i++) {
    // Track number of elements swapped during a single array traversal
    int numberOfSwaps = 0;
    
    for (int j = 0; j < n - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            numberOfSwaps++;
        }
    }
    
    // If no elements were swapped during a traversal, array is sorted
    if (numberOfSwaps == 0) {
        break;
    }
}

Task
Given an n-element array, A = a0,a1,a2,...an-1, of distinct elements, sort array A in ascending order using the Bubble Sort algorithm above. Once sorted, print the following three lines:

    Array is sorted in numSwaps swaps., where numSwaps is the number of swaps that took place.
    First Element: firstElement, where firstElement is the first element in the sorted array.
    Last Element: lastElement, where lastElement is the last element in the sorted array.

Input Format

The first line contains an integer, n, denoting the number of elements in array A.
The second line contains space-separated integers describing the respective values of a0,a1,..,an-1.

Constraints

2 <= n <= 600
1 <= ai <= 2 x 10^6, i E [0,n-1]

Output Format

You must print the following three lines of output:

    Array is sorted in numSwaps swaps., where numSwaps is the number of swaps that took place.
    First Element: firstElement, where firstElement is the first element in the sorted array.
    Last Element: lastElement, where lastElement is the last element in the sorted array.

Sample Input 0

3
1 2 3

Sample Output 0

Array is sorted in 0 swaps.
First Element: 1
Last Element: 3

Explanation 0
The array is already sorted, so swaps take place and we print the necessary three lines of output shown above.


Sample Input 1

3
3 2 1

Sample Output 1

Array is sorted in 3 swaps.
First Element: 1
Last Element: 3

Explanation 1

The array is not sorted, and its initial values are: {3,2,1}. The following swaps 3 take place:

1. {3,2,1} -> {2,3,1}
2. {2,3,1} -> {2,1,3}
3. {2,1,3} -> {1,2,3}

At this point the array is sorted and we print the necessary three lines of output shown above.