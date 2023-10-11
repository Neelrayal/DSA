#include<bits/stdc++.h>
using namespace std;

#warning don't forget to remove the readfile from both the files
void display(deque<int> &q1, deque<int> &q2){
	cout << "q1: ";
	for(auto &x: q1) 
		cout << x << " ";
	
	cout << "  q2: "; 
	for(auto &x: q2) 
		cout << x << " ";
	cout << "\n"; 
	
}
int main(){        

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// #ifndef ONLINE_JUDGE
	 
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
 
	// #endif    
	
	int t; 
	cin >> t;
	while(t--){
		int n; 
		cin >> n;
		vector<int> arr(n); 

		for(auto &x: arr)
			cin >> x; 

		if ( n == 1){
			cout << "Yes\n"; 
			continue; 
		}

		deque<int> dq1, dq2; 
		dq1.push_front(arr[n-1]); 
		dq2.push_front(arr[n-2]);
		bool flag = true;  
		for(int i = n-3; i>=0; --i){
			int s1 = dq1.size(); 
			int s2 = dq2.size(); 

			if ( (s1 + s2) & 1){
				// cout << "before: \n";
				// display(dq1, dq2); 	
				int temp[3]; 
				temp[0] = dq1[s1-1], temp[1] = dq1[s1-2], temp[2] = dq2[s2-1]; 
				sort(temp, temp+3); 

				if ( arr[i] <= min(temp[1], temp[2]) ){
					dq2.push_front(dq1.back()); 
					dq1.pop_back(); 
					dq1.push_back(arr[i]); 
					//dq2.push_front(arr[i]);
				}					
				else{
					flag = false; 
					break; 
				}
			}			
			else{
				if ( arr[i] <= min(dq1.front(), dq2.front()) ){
					dq1.push_back(arr[i]); 
				}
				else{
					flag = false; 
					break;
				}
			}
			//display(dq1, dq2); 
		}
		if ( flag) cout << "Yes\n"; 
		else cout << "No\n";
	}
	
}