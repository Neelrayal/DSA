#include<bits/stdc++.h>
using namespace std;

vector<long long> lcmAndGcd(long long A , long long B) {
        long long a = A, b = B;
        while (a>0 && b >0 && a != b){
            if ( a > b) a = a-b;
            else b = b-a; 
        }
        cout << "gcd : " << a << "\n";
    }


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
        //cin >> n;
        cout << pow(3,4) << endl;
        lcmAndGcd(5, 10);
    }

}