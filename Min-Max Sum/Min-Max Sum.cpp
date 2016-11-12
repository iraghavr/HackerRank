#include <bits/stdc++.h>

using namespace std;

int main() {
    
    vector<int> arr(5);
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
        
       cin >> arr[arr_i];
    }
    long long int max_max = -1000000000, min_min = 10000000000, s = 0;
    
    for(int i = 0; i < 5; i++){
        
        s += arr[i]; 
    }
    
    for(int i = 0; i < 5; i++){
        
        if(s - arr[i] > max_max) max_max = s - arr[i];
        
        if(s - arr[i] < min_min) min_min = s - arr[i];
    }
    
    cout<<min_min<<" "<<max_max;
    
    return 0;
}