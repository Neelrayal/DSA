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
    cin >> test;
    while(test--){
        int n;
        cin >> n; 
        vector<int> arr(n); 
        for(auto &x: arr)
            cin >> x; 

        bool zero = false, two = false, three = false, ok = true; 
        for(int i = 0; i<n; ++i){
            if ( arr[i] % 10 == 5){
                zero = true;                 
                continue; 
            }
            while ( arr[i] < 10 ){
                arr[i] += arr[i]%10; 
            }

            if ( arr[i] & 1){
                arr[i] += arr[i]%10; 
            }

            // first 0
            while(arr[i] % 4 != 0) {
                cout << "first while\n"; 
                arr[i] += arr[i] % 10; 
            }

            int cnt = 0; 
            while(true){
                cout << "second while\n"; 
                cnt++; 
                arr[i] += arr[i]%10; 
                if ( arr[i] % 4 == 0) break;
            }
            if ( cnt == 4) three = true; 
            else two = true; 

            if ( zero && two || two && three || three && zero ){
                ok = false; 
                break;
            }            
        }
        if ( ok ) cout << "YES\n"; 
        else cout << "NO\n";
    }
    
}