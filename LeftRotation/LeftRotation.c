#include <stdio.h>
#include <malloc.h>

int* array_left_rotation(int *a, int n, int k) {
    
     int i, *out = malloc(sizeof(int) * n);
    
     k %= n; 
    
     for(i = 0; i < n; ++i) {
         
         out[(n+i-k) % n] = a[i];
     } 
    
    return out;
}

int main(){
    
    int *a, i, n, k; 

    scanf("%d %d",&n, &k);
    
    a = malloc(sizeof(int) * n);
    
    for(i = 0; i < n; i++){

       scanf("%d", (a + i));
    }
    
    a = array_left_rotation(a, n, k);
    
    for(i = 0; i < n; i++) {
        
       printf("%d ", *(a + i));
    }
    
    return 0;
}
