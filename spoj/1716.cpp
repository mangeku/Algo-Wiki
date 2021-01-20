#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
const int nax = 1e5 + 5; 
struct node{
	ll sum = INT_MIN; 
	ll maxprefixsum = INT_MIN; 
	ll maxsuffixsum = INT_MIN; 
	ll maxsum = INT_MIN; 
	node(ll x){
		sum = x; 
		maxprefixsum = x; 
		maxsuffixsum = x; 
		maxsum = x; 
	}
	node(){
		sum = -9999999; 
		maxprefixsum = -9999999; 
		maxsuffixsum = -9999999; 
		maxsum = -99999999; 
	}
};
node tree[4*nax]; 
ll arr[nax]; 
node combine(node &a , node &b){
	node ans; 
	ans.sum = a.sum + b.sum; 
	ans.maxprefixsum = max(a.sum + b.maxprefixsum, a.maxprefixsum); 
	ans.maxsuffixsum = max(a.maxsuffixsum + b.sum , b.maxsuffixsum); 
	ans.maxsum = max({a.maxsum,b.maxsum,a.maxsuffixsum+b.maxprefixsum}); 
	return ans; 
}
void build(int start , int end , int pos){
	if(start == end){
		tree[pos] = node(arr[start]);  
		return ;
	}
	int mid = start + (end - start)/2; 
	build(start,mid,2*pos); 
	build(mid + 1 , end , 2*pos + 1); 
	tree[pos] = combine(tree[2*pos],tree[2*pos + 1]); 
}
node query(int start , int end , int pos , int l , int r){
	if(start > end || r < start || l > end) return -9999999; 
	if(start >= l && end <= r) return tree[pos]; 
	int mid = start + (end - start)/2; 
	node left = query(start,mid,2*pos,l,r); 
	node right = query(mid+1,end,2*pos+1,l,r); 

	return combine(left,right); 
}
void update(int start , int end , int pos , int ind , ll val){
	if(start == end){
		tree[pos] = node(val); 
		return ; 
		
	}
	else{
		int mid = start + (end - start)/2; 
		if(mid >= ind){
			update(start,mid,2*pos, ind , val); 
		}
		else{
			update(mid + 1 , end , 2*pos + 1 , ind , val); 
		}
		tree[pos] = combine(tree[2*pos],tree[2*pos+1]); 
	}
	
}
int main(){
	int n; 
	cin >> n; 
	for(int i = 1 ; i <= n ; i++) cin >> arr[i]; 
	build(1,n,1); 
	//cout << "build complete " << endl; 
	int q; 
	cin >> q; 

	for(int i = 0 ; i < q ; i++){
		int ch, l , r ; 
		cin >> ch >> l >> r; 
		if(ch == 1)
			cout << query(1 , n , 1 , l , r).maxsum << endl; 
		else{
			update(1,n,1,l,r);
		}
		
	}
	return 0; 
} 
