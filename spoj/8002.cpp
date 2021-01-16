#include<bits/stdc++.h> 
using namespace std; 
const int nax = 1e5 + 5; 
typedef long long ll; 
ll tree[4*nax]; 
ll lazy[4*nax]; 
int choice , p , q , v ,n , c; 
void update(int start , int end, int pos , int l , int r , int val){
	if(start > end || r < start || l > end) return ; 
	if(lazy[pos]!=0){
		tree[pos] += 1LL*(end - start + 1)*lazy[pos]; 
		if(start != end){
			lazy[2*pos] += lazy[pos]; 
			lazy[2*pos + 1] += lazy[pos]; 
		} 
		lazy[pos] = 0; 
	}
	
	if(start >= l && end <= r ){
		tree[pos] += 1LL*(end - start + 1)*val; 
		if(start!=end){
			lazy[2*pos] += val; 
			lazy[2*pos + 1] += val; 
		}
		lazy[pos] = 0; 
		return ; 
	}
	int mid = start + (end - start)/2; 
	update(start , mid , 2*pos , l , r , val); 
	update(mid + 1 , end , 2*pos + 1 , l , r , val); 
	tree[pos] = tree[2*pos] + tree[2*pos +1 ]; 
}
ll query(int start , int end , int pos , int l , int r){
	if(start > end || r < start || l > end) return 0; 
	if(lazy[pos]!=0){
		tree[pos] += 1LL*(end - start + 1)*lazy[pos]; 
		if(start != end){
			lazy[2*pos] += lazy[pos]; 
			lazy[2*pos + 1] += lazy[pos]; 
		} 
		lazy[pos] = 0; 
	}
	if(start >= l && end <= r) return tree[pos]; 
	int mid =  start + (end - start)/2;  
	return query(start , mid , 2*pos , l , r) + query(mid + 1 , end , 2*pos + 1 , l , r); 
}
int main(){
	int t; 
	cin >> t; 
	while(t--){
		memset(lazy,0,sizeof(lazy));
		memset(tree,0,sizeof(tree)); 
		cin >> n >> c; 
		for(int i = 0 ; i < c ; i++){
			cin >> choice >> p >> q; 
			if(choice == 0){
				cin >> v; 
				update(1,n,1,p,q,v);
			}
			else{
				cout << query(1,n,1,p,q) << endl;
			}
		}
	}
	
	return 0; 
}
