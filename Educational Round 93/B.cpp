
// Problem : B. Substring Removal Game
// Contest : Codeforces - Educational Codeforces Round 93 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1398/problem/B
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>

using namespace std;

void solve() {
	string inputString;
	cin >> inputString;
	
	vector<int> frequency;
	
	int seq = 0; 
	
	for (int i = 0; i < inputString.size(); i++) {
		if (inputString[i] == '1') {
			seq++;
		} else {
			frequency.push_back(seq);
			seq = 0;
		}
		if (i == inputString.size() - 1) {
			frequency.push_back(seq);
		}
	}
	
	sort(frequency.begin(), frequency.end());
	int alice = 0, bob = 0;
	
	int counter = 0;
	for (int i = frequency.size() - 1; i >=0; i--){
		if (counter % 2 == 0) {
			alice += frequency[i];
		} else {
			bob += frequency[i];
		}
		counter++;
	}
	cout << alice << endl;
}

int main(int argv, char *argc[]) {
	int testCases;
	cin >>  testCases;
	while (testCases--) {
		solve();
	}
}
