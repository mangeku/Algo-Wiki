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
node combine(node a , node b){
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
	//cout << left << " " << right << endl; 
	//cout << left.maxsum << " " << right.maxsum << endl;
	return combine(left,right); 
}

int main(){
	int n; 
	cin >> n; 
	for(int i = 1 ; i <= n ; i++) cin >> arr[i]; 
	build(1,n,1); 
	//cout << "build complete " << endl; 
	int q; 
	cin >> q; 
	//for(int i = 1 ; i <= 4 * n ; i++){
		//cout << tree[i].sum << " " << tree[i].maxprefixsum << " " << tree[i].maxsuffixsum << " " << tree[i].maxsum << endl; 
	//}
	for(int i = 0 ; i < q ; i++){
		int l , r ; 
		cin >> l >> r; 
		cout << query(1 , n , 1 , l , r).maxsum << endl; 
	}
	return 0; 
}
