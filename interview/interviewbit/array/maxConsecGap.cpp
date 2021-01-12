// can be simple done by sorting and finding the consecutive difference for all the elements and returning the max of that
// It takes 0(nlongn) time we can improve that by a solution based on pigeon sort
#include<bits/stdc++.h> 
using namespace std; 

int maximumGap(vector< int > &arr){
	int n = arr.size(); 
     if(n < 2) return 0; 
     int maxi = *max_element(arr.begin(),arr.end()); 
     int mini = *min_element(arr.begin(),arr.end()); 
     double gap = ((double)(maxi-mini))/(double)(n-1); 
     if(gap == 0) return 0; 
     vector< int > max_bucket(n , INT_MIN); 
     vector< int > min_bucket(n , INT_MAX); 
     for(int i = 0 ; i < n ; i++){
        double x = (double)(arr[i] - mini)/gap;
        int ind = x; 
        max_bucket[ind] = max(max_bucket[ind] , arr[i]); 
        min_bucket[ind] = min(min_bucket[ind],arr[i]); 
     }
     vector<int> minis, maxis ; 
     for(int i = 0 ; i < n ; i++){
         if(min_bucket[i] != INT_MAX){
             minis.push_back(min_bucket[i]); 
             maxis.push_back(max_bucket[i]); 
         }
     }
     int ans = INT_MIN; 
     for(int i = 1 ; i < (int)minis.size() ; i++){
         ans = max(ans , minis[i]-maxis[i-1]); 
     }
     return ans; 
}
int main(){
	int n; 
	cin >> n; 
	vector< int > arr(n);
	for(int i = 0 ; i < n ; i++)
	{
		cin >> arr[i]; 
	}
	int ans = maximumGap(arr);
	if(ans == -1)
		cout << "size is less than 2" << endl; 
	else 
		cout << "maximum difference between two consecutive array elements is : " << ans << endl; 
	
	return 0; 
}
