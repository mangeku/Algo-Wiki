#include<bits/stdc++.h> 
using namespace std; 
void solve(vector< vector< int > > & ans , vector< int > &sub, vector< int > &arr , int sum , int cur, int left, int size){
	if(cur == sum)
		ans.push_back(sub);
	for(int i = left ; i < size ; i++){
		sub.push_back(arr[i]);
		solve(ans,sub,arr,sum , cur + arr[i] , i + 1 , size);
		sub.pop_back();
	}
}

void printSubset(vector< vector< int> > &ans){
	int r = ans.size();
	if(r == 0){
		cout << "Empty" << endl; 
		return ; 
	}
	for(int i = 0 ; i < r ; i++){ 
	   int c = ans[i].size();
	   for(int j = 0 ; j < c ; j++)
		{
			cout << ans[i][j] << " "; 
		}
		cout << endl;
	}
}


int main(){
	int n; 
	cin >> n; 
	vector< int > arr(n);
	for(int i = 0; i < n ;i++)
		cin >> arr[i]; 
	int sum; 
	cin >> sum; 
	vector< vector< int > > ans;
	vector< int > sub;  
	solve(ans, sub , arr , sum , 0 , 0 , n);
	printSubset(ans);
	return 0; 
}
