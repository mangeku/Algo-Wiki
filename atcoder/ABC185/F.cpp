#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

#define  fastIO         ios:: sync_with_stdio(0);cin.tie(0);cout.tie(0);cout<<fixed;cout<<setprecision(15);
#define  ft              first                 
#define  sd              second
#define  pb             push_back  
#define  mset(a,x)      memset(a,x,sizeof(a))
#define  debA(a)        for(auto it: a)cout<<it<<" ";cout<<"\n";
#define  uniq(a)        a.resize(unique(a.begin(), a.end()) - a.begin());
#define  all(a)         a.begin(),a.end()           

 
typedef  long long             ll;
typedef  long double           ld;
typedef  pair<ll,ll>           pll;
typedef  vector<ll>            vll;
typedef  vector<pll>           vpll;
typedef  vector<int> 		   vi; 
typedef  pair<int,int>         pii; 
typedef  vector<pii> 		   vpii; 

const ll   nax   =  1e6+5;
const ll   mod   =  1e9+7;
const ll   inf   =  (1LL<<62)-1;
const int  infi  =  (1<<30)-1;

struct items{
	int val; 
	items(){
		val = 0; 
	}
};
int n , q; 
int arr[nax];
items tree[4*nax + 8]; 
items combine(items x , items y){
	items ans; 
	ans.val = x.val^y.val; 
	return ans; 
} 
void build(int ind , int l , int r){
	if(l == r){
		tree[ind] = items(); 
		tree[ind].val = arr[l]; 
		return ; 
	}
	int mid = l + (r - l)/2; 
	build(ind*2 , l  , mid);
	build(ind*2 + 1 , mid + 1 , r);
	tree[ind] = combine(tree[2*ind] , tree[2*ind + 1]);
}
void update(int start , int end , int ind , int pl, int value){
	if(start == end){
		tree[ind].val ^= value; 
		return ; 
	}
	int mid = start + (end - start)/2; 
	if(start <= pl && pl <= mid)
		update(start , mid , ind * 2 , pl , value);
	else
		update(mid + 1 , end , ind*2+1 , pl , value);
	tree[ind]=combine(tree[2*ind],tree[2*ind+1]);
}
items query(int start , int end , int ind , int l , int r){
	if(start > end || r < start || l > end)
	{
		items x; 
		return x; 
	}
	if(start >= l && end <= r)
		return tree[ind]; 
	int mid = start + (end - start)/2; 
	items lval = query(start , mid , 2*ind , l , r); 
	items rval = query(mid + 1 , end , 2*ind + 1 , l , r); 
	return combine(lval,rval);
}
int main(){
	fastIO; 
	cin >> n >> q; 
	for(int i = 1 ; i <= n ; i++) 
		cin >> arr[i];
	build(1 , 1 , n); 
	for(int i = 1 ; i <= 4*n ; i++){
		cout << tree[i].val << " "; 
	}
	cout << endl;
	cout << endl;
	for(int i = 1 ; i <= q; i++)
	{
		int x , a , b; 
		cin >> x >> a >> b; 
		if(x == 1){
			update(1,n,1,a,b);
		}
		else{
			items ans = query(1,n,1,a,b);
			cout << ans.val << endl; 
		}
	}
	return 0; 
}
