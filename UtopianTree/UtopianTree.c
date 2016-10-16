/*
The Utopian Tree goes through 2 cycles of growth every year. Each spring, it doubles in height. Each summer, its height increases by 1 meter.

Laura plants a Utopian Tree sapling with a height of 1 meter at the onset of spring. How tall will her tree be after N growth cycles?

Input Format

The first line contains an integer, T, the number of test cases.
T subsequent lines each contain an integer, N, denoting the number of cycles for that test case.

Constraints

1 <= T <= 10
0 <= N <= 60

Output Format

For each test case, print the height of the Utopian Tree after N cycles. Each height must be printed on a new line.

Sample Input

3
0
1
4

Sample Output

1
2
7

Explanation

There are 3 test cases.

In the first case (N = 0), the initial height (H = 1) of the tree remains unchanged.

In the second case (N = 1), the tree doubles in height and is 2 meters tall after the spring cycle.

In the third case (N = 4), the tree doubles its height in spring (H = 2), then grows a meter in summer (H = 3), then doubles after the next spring ( H = 6), and grows another meter after summer (H =7). Thus, at the end of 4 cycles, its height is 7 meters.

*/

#include <stdio.h>

int Height(int cycle) {
 
    int i, 
        h = 1;

    for(i = 1; i <= cycle; i++) {

        if(i % 2 != 0) h *= 2;
        if(i % 2 == 0) h += 1; 
    }
 
    return h;
}   

int Height_rec(int cycle) {

    if(cycle == 0) return 1; 

    if(cycle % 2 != 0) return 2 * Height_rec( cycle - 1);

           else return 1 + Height_rec( cycle - 1);     
}   


int main() {

    int i, //iterator for test cases
        vec[100],
        c,//cycle
        T;//number of test cases

    printf("Give the number of test cases -> ");    
    scanf("%d", &T);

    for(i = 1; i <= T; ++i) {
       
        scanf("%d", &vec[i]);
    }  

    for(i = 1; i <= T; ++i) {

        printf("%d\n", Height_rec(vec[i])); 
    }

 return(0); 
}