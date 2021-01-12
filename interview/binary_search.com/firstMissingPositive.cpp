#include<bits/stdc++.h> 
using namespace std;
int solve(vector<int>& nums) {
   map< int , int > mp;
   for(auto it: nums){
       if(it > 0){
           mp[it]++; 
       }
   }    
   int ans = 1; 
   for(auto it : mp){
       if(it.first != ans ){
           return ans; 
       }
       ans++; 
   }
   return ans; 
}
int main(){
	int n; 
	cin >> n; 
	vector< int > nums(n); 
	for(int i = 0 ; i < n ; i++){
		cin >> nums[i]; 
	}
	
	return 0; 
}
