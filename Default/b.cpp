#include<bits/stdc++.h>
using namespace std;

long long ans = 0; 

pair<int, int> dfs(int cur, vector<vector<int>> &adjList, 
string &s){
	pair<int, int> p, q; 
	p.first = 0, p.second = 0; 
	for(auto &x: adjList[cur]){
		q = dfs(x, adjList, s); 
		p.first += q.first; 
		p.second += q.second; 
	}
	if ( s[cur] == 'B') p.first++; 
	else p.second++; 
	if ( p.first == p.second) ++ans; 
	return p; 
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
		cin >> n; 
		vector<vector<int>> adjList(n + 1); 
		for(int i = 2; i<=n; ++i){
			int temp; 
			cin >> temp; 
			adjList[temp].push_back(i);
		}
		string s; 
		cin >> s; 
		s = "0" + s; 		
		ans = 0; 
		dfs(1, adjList, s); 
		cout << ans << "\n";
	}
	
}