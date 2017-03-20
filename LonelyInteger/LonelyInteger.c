int main() {

   int i, 
       n, 
       v[101], 
       sum; 

    scanf("%d", &n);
    
    for(i = 0; i < n; i++) 
    
        scanf("%d", &v[i]);
        
    sum = 0;
    
    for(i = 0; i < n; ++i) sum ^= v[i];
    
    printf("%d",sum);
    
 return 0;
}