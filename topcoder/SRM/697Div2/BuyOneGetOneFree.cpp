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
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
class BuyOneGetOneFree {
  public:
  int buy(vector <int> prices) {
      sort(prices.rbegin(),prices.rend()); 
      int ans = 0; 
      int n = prices.size(); 
      for(int i = 0 ; i < n ; i += 2) ans += prices[i]; 
      return ans; 
  }
};

// BEGIN CUT HERE
#include <cstdio>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
namespace moj_harness {
	using std::string;
	using std::vector;
	int run_test_case(int);
	void run_test(int casenum = -1, bool quiet = false) {
		if (casenum != -1) {
			if (run_test_case(casenum) == -1 && !quiet) {
				std::cerr << "Illegal input! Test case " << casenum << " does not exist." << std::endl;
			}
			return;
		}
		
		int correct = 0, total = 0;
		for (int i=0;; ++i) {
			int x = run_test_case(i);
			if (x == -1) {
				if (i >= 100) break;
				continue;
			}
			correct += x;
			++total;
		}
		
		if (total == 0) {
			std::cerr << "No test cases run." << std::endl;
		} else if (correct < total) {
			std::cerr << "Some cases FAILED (passed " << correct << " of " << total << ")." << std::endl;
		} else {
			std::cerr << "All " << total << " tests passed!" << std::endl;
		}
	}
	
	int verify_case(int casenum, const int &expected, const int &received, std::clock_t elapsed) { 
		std::cerr << "Example " << casenum << "... "; 
		
		string verdict;
		vector<string> info;
		char buf[100];
		
		if (elapsed > CLOCKS_PER_SEC / 200) {
			std::sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}
		
		if (expected == received) {
			verdict = "PASSED";
		} else {
			verdict = "FAILED";
		}
		
		std::cerr << verdict;
		if (!info.empty()) {
			std::cerr << " (";
			for (size_t i=0; i<info.size(); ++i) {
				if (i > 0) std::cerr << ", ";
				std::cerr << info[i];
			}
			std::cerr << ")";
		}
		std::cerr << std::endl;
		
		if (verdict == "FAILED") {
			std::cerr << "    Expected: " << expected << std::endl; 
			std::cerr << "    Received: " << received << std::endl; 
		}
		
		return verdict == "PASSED";
	}

	int run_test_case(int casenum__) {
		switch (casenum__) {
		case 0: {
			int prices[]              = {47};
			int expected__            = 47;

			std::clock_t start__      = std::clock();
			int received__            = BuyOneGetOneFree().buy(vector <int>(prices, prices + (sizeof prices / sizeof prices[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			int prices[]              = {10, 20};
			int expected__            = 20;

			std::clock_t start__      = std::clock();
			int received__            = BuyOneGetOneFree().buy(vector <int>(prices, prices + (sizeof prices / sizeof prices[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			int prices[]              = {10, 20, 30, 20};
			int expected__            = 50;

			std::clock_t start__      = std::clock();
			int received__            = BuyOneGetOneFree().buy(vector <int>(prices, prices + (sizeof prices / sizeof prices[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			int prices[]              = {5, 7, 13, 2, 9};
			int expected__            = 22;

			std::clock_t start__      = std::clock();
			int received__            = BuyOneGetOneFree().buy(vector <int>(prices, prices + (sizeof prices / sizeof prices[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			int prices[]              = {100, 100, 100, 100, 100, 100};
			int expected__            = 300;

			std::clock_t start__      = std::clock();
			int received__            = BuyOneGetOneFree().buy(vector <int>(prices, prices + (sizeof prices / sizeof prices[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			int prices[]              = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = BuyOneGetOneFree().buy(vector <int>(prices, prices + (sizeof prices / sizeof prices[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			int prices[]              = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = BuyOneGetOneFree().buy(vector <int>(prices, prices + (sizeof prices / sizeof prices[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			int prices[]              = ;
			int expected__            = ;

			std::clock_t start__      = std::clock();
			int received__            = BuyOneGetOneFree().buy(vector <int>(prices, prices + (sizeof prices / sizeof prices[0])));
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
		default:
			return -1;
		}
	}
}

#include <cstdlib>
int main(int argc, char *argv[]) {
	if (argc == 1) {
		moj_harness::run_test();
	} else {
		for (int i=1; i<argc; ++i)
			moj_harness::run_test(std::atoi(argv[i]));
	}
}
// END CUT HERE
