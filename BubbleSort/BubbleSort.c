#include <stdio.h>
#include <malloc.h>

int main(){
    int i, n, changes, _changes = 0; 

    scanf("%d",&n);
    
    int *a = malloc(sizeof(int) * n);
    
    for(i = 0; i < n; i++){

       scanf("%d", &a[i]);
    }
    
    do {
        
       changes = 0;
        
       for(i = 0; i < n - 1; i++)
           
           if(a[i] > a[i + 1]) {
               
               int x = a[i]^a[i+1];
                   a[i] = x^a[i];
                   a[i+1] = x^a[i+1];
                    changes++;
                   _changes++;
           }
                              
    } while(changes);
    
    printf("Array is sorted in %d swaps.\nFirst Element: %d\nLast Element: %d", _changes, a[0], a[n-1]);    
    return 0;
}