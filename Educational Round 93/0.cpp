
// Problem : A. Bad Triangle
// Contest : Codeforces - Educational Codeforces Round 93 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1398/problem/0
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>

using namespace std;

void solve() {
	long long int N;
	cin >> N;
	
	vector<long long int> myArray;
	
	for (int i = 0; i < N; i++) {
		long long int currentInt;
		
		cin >> currentInt;
		myArray.push_back(currentInt);
	}
	if (myArray[0] + myArray[1] <= myArray[myArray.size() - 1]) {
		cout << 1 << ' ' << 2 << ' ' << myArray.size() << endl;
		return;
	} else {
		cout << -1 << endl;
		return;
	}
}

int main(int argv, char *argc[]) {
	int testCases;
	cin >>  testCases;
	while (testCases--) {
		solve();
	}
}
