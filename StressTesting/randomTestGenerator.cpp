#include<bits/stdc++.h>

using namespace std;


int randomNumberBetwee(int a, int b){
    if(a>b)
        swap(a,b);
    return a + rand()%(b - a + 1);
}
int main(int argc, char* argv[]){
    //srand(atoi(argv[1]));
    srand(time(NULL)); // by striver
    int t = randomNumberBetwee(1, 1); 
    cout << t << "\n"; 
    int n = randomNumberBetwee(1,1000);
    cout << n << "\n";
    for(int i = 0; i<n; ++i){
        int a = randomNumberBetwee(1, 1000000); 
        cout << a << " "; 
    }
    cout << "\n";
}