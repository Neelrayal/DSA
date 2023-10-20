#include<bits/stdc++.h>
using namespace std;

int main(){        

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    #ifndef ONLINE_JUDGE
     
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 
    #endif    

    int test;
    test = 1; 
    while(test--){        
        vector<int > arr(14); 
        int ans = 0; 
        for(int i = 0; i<14; ++i){
            cin >> arr[i];
            if ( arr[i] % 2 == 0) 
                ans += arr[i]; 
        }        

        for(int i = 0; i<14; ++i){
            vector<int > brr = arr; 
            int sum = 0; 
                          
            int x = brr[i]/14; 
            int rem = brr[i] % 14; 
            brr[i] = 0; 

            for(int i = 0; i<14; ++i){
                brr[i] += x; 
            }                                                
            
            int j = i; 
            while(rem--){
                j = (j + 1)%14;
                brr[j]++; 
            }

            for(int i = 0; i<14; ++i){                
                if ( brr[i] % 2 == 0)
                    sum += brr[i]; 
            }            
            ans = max(ans, sum);             
        }
        cout << ans << "\n";
    }
    
}