#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
const int nax = 1e6 + 6; 
/*
int arr[nax]; 
int tree[4*nax]; 
void build(int start , int end , int pos){
	if(start == end){
		tree[pos] = arr[start]; 
		return ; 
	}
	int mid = start + (end - start)/2; 
	build(start, mid , 2*pos); 
	build(mid+1, end , 2*pos + 1); 
	tree[pos] = max(tree[2*pos],tree[2*pos+1]); 
}
int query(int start , int end , int pos , int l , int r){
	if(start > end || r < start || l > end) return INT_MIN; 
	if(start >= l && end <= r) return tree[pos]; 
	int mid = start + (end - start)/2; 
	return max(query(start , mid , 2*pos , l , r ), query(mid +1, end , 2*pos+1 , l , r)); 
}
*/
int main(){
	int n; 
	cin >> n;
	int arr[n+1]; 
	for(int i = 1 ; i <= n ; i++) cin >> arr[i]; 
	deque< int > dq; 
	for(int i = 1 ; i <= k ; i++){
		while(!dq.empty() && arr[dq.front()] <= arr[i])
			dq.pop_front(); 
		dq.push(i); 
	}
	return 0; 

}
