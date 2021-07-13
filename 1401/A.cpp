
// Problem : A. Distance and Axis
// Contest : Codeforces - Codeforces Round #665 (Div. 2)
// URL : https://codeforces.com/contest/1401/problem/0
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>

using namespace std;

void solve() {
	long long int A, K;
	cin >> A >> K;
	
	if (K <= A) {
		if (abs(A - K) % 2 == 0) {
		cout << 0 << endl;
		} else {
			cout << 1 << endl;
		}
	} else {
		cout << K - A << endl;
	}

}

int main(int argv, char *argc[]) {
	int testCases;
	cin >>  testCases;
	while (testCases--) {
		solve();
	}
}
