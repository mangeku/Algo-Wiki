#include <bits/stdc++.h>
using namespace std;
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
	*this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
class OrganicChemistry {
  public:
  int countHydrogens(string atoms, vector <int> X, vector <int> Y) {
      int n = atoms.size(); 
      int m = X.size(); 
      map< char , int > mp; 
      mp['O'] = 2; 
      mp['C'] = 4; 
      mp['N'] = 3; 
      vector< int > bonds(n); 
      for(int i = 0 ; i < m ; i++){
		  bonds[X[i]]++; 
		  bonds[Y[i]]++; 
	  }
	  int ans = 0; 
	  for(int i = 0 ; i < n ; i++){
		  ans += (mp[atoms[i]] - bonds[i]); 
	  }
	  return ans; 
  }
};



// Powered by FileEdit
// Powered by moj 4.18 [modified TZTester]

// Powered by CodeProcessor
