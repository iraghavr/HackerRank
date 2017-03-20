#include <stdio.h>
#define MAXSIZE 1024

int main() {

    int i, j, n, vec[ MAXSIZE ], 
                 len[ MAXSIZE ],
        max, maxIndex;
    
    scanf("%d", &n);

    for(i = 1; i <= n; ++i) scanf("%d", &vec[i]);
  
    len[ n ] = 1;
    
    for(i = n - 1; i >= 1; --i) {

        max = 0;

        for(j = i + 1; j <= n; j++) 

                if(vec[ j ] >= vec[ i ] && len[ j ] > max) max = len[ j ]; 
        
        len[ i ] = 1 + max; 
    } 

    max = len[ 1 ];

    maxIndex = 1;

    for(i = 2; i <= n; i++) 

        if(len[ i ] > max) max = len[ i ], maxIndex = i;  

    printf("%d", len[ maxIndex ]);  

    return(0);
}
