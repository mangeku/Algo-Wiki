#include<bits/stdc++.h> 
using namespace std; 

typedef long long ll; 
struct node{
	int maxi = 0; 
	int secondmaxi = 0; 
};

const int nax = 1e5 + 5; 

node tree[4*nax + 1]; 
vector< int > arr(nax + 1, 0); 
node merge(node a , node b){
	node ans; 
	vector< int > temp; 
	temp = {a.maxi , a.secondmaxi , b.maxi , b.secondmaxi}; 
	sort(temp.begin(),temp.end()); 
	ans.maxi = temp[3]; 
	ans.secondmaxi = temp[2]; 
	return ans; 
}
void build(int first , int last , int ind){
	if(first > last ) return ; 
	if(first == last){
		tree[ind].maxi = arr[first]; 
		tree[ind].secondmaxi = 0; 
		return ; 
	}
	int mid = first + (last - first)/2; 
	build(first , mid , 2*ind); 
	build(mid + 1 , last , 2*ind + 1); 
	tree[ind] = merge(tree[2*ind],tree[2*ind + 1]); 
}
void update(int first , int last , int ind , int pos , int val){
	if(pos > last || pos < first) return ; 
	if(first == last){
		tree[ind].maxi = val; 
		tree[ind].secondmaxi = 0; 
		return; 
	}
	int mid = first + (last - first)/2; 
	if(pos >= first && pos <= mid) update(first , mid , 2*ind , pos , val); 
	else update(mid + 1 , last , 2*ind + 1 , pos , val); 
	tree[ind] = merge(tree[2*ind],tree[2*ind + 1]); 
	
}

node query(int first , int last , int ind , int l , int r){
	if(l > last || r < first || first > last){
		node temp; 
		temp.maxi = 0; 
		temp.secondmaxi = 0; 
		return temp; 
	}
	if(first >= l && last <= r) return tree[ind]; 
	int mid = first + (last - first)/2; 
	return merge(query(first , mid , 2*ind , l , r ),query(mid + 1 , last , 2*ind + 1 , l , r));
	
}
int main(){
	int n; 
	cin >> n; 
	for(int i = 1 ; i <= n ; i++) cin >> arr[i]; 
	build(1 , n , 1); 
	int q; 
	cin >> q; 
	for(int i = 0 ; i < q ; i++){
		char ch; 
		int l , r; 
		cin >> ch >> l >> r; 
		if(ch == 'U') update(1 , n , 1 , l , r);
		else{
			 node x = query(1 , n , 1 , l , r); 
			 cout << x.maxi + x.secondmaxi << endl;
		} 
	}
	return 0; 
}
