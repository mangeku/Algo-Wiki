#include<bits/stdc++.h> 
using namespace std; 
vector<pair<int,int>> solve(vector<pair<int,int>> &intervals , pair< int , int > newInterval){
	intervals.push_back(newInterval); 
	vector< pair<int, int> > ans; 
	sort(intervals.begin() , intervals.end()); 
	pair< int , int > cur = intervals[0]; 
	int n = intervals.size(); 
	for(int i = 1 ; i < n ; i++){
		if(cur.second >= intervals[i].first) cur.second = max(cur.second,intervals[i].second); 
		else{
			ans.push_back(cur); 
			cur = intervals[i]; 
		}
	}
	ans.push_back(cur); 
	return ans; 
}

int main(){
	int n; 
	cin >> n; 
	vector< pair< int , int > > intervals(n); 
	for(int i = 0 ;i < n ;i++){
		int first , second; 
		cin >> first >> second; 
		intervals[i] = {first , second}; 
	}
	pair< int , int > pr; 
	int x , y; 
	cin >> x >> y; 
	pr = {x,y}; 
	vector<pair<int, int> > ans = solve(intervals,pr);
	int m = ans.size(); 
	for(int i = 0 ; i < m ; i++) cout << ans[i].first <<" " << ans[i].second << endl;	
	
	return 0; 
}
