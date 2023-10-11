#include<bits/stdc++.h>
using namespace std;

int main(){        

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    #ifndef ONLINE_JUDGE
     
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 
    #endif    

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n; 

        string s; 
        cin >> s; 
        n = s.length(); 
        int cur = 0, maxi = 0, comp = 0; 
        for(int i = 0; i<n; ++i){
            if ( s[i] == '(') cur++; 
            else cur--; 
            maxi = max(maxi, cur); 

            if ( cur == 0){
                if ( comp == 0) comp += maxi; 
                else comp += maxi - 1; 
                maxi = 0; 
            }
        }
        cout << comp << "\n";
    }
    
}