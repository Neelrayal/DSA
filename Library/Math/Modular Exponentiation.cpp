/**
 * https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/
*/

// Calculates x^y%p
#define ll long long
ll power(ll x, ll y, ll p){
    ll res = 1; // Initialize result    
    x = x % p;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}        

