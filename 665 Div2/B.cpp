
// Problem : B. Ternary Sequence
// Contest : Codeforces - Codeforces Round #665 (Div. 2)
// URL : https://codeforces.com/contest/1401/problem/B
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>

using namespace std;

void solve() {
	long long int x1, y1, z1;
	long long int x2, y2, z2;
	
	cin >> x1 >> y1 >> z1;
	cin >> x2 >> y2 >> z2;
	
	long long sum = 0;
	
	if (z1 > y2) {
		sum = 2 * y2 ;
	} else {
		sum = 2 * z1;
	} 
	y2 -= min(z1, y2);
	
	if ((x2 + y2) >= y1) {
		cout << sum << endl;
	} else {
		 sum -=   2 * (y1 - (x2 + y2));
		 cout << sum << endl;
	}

}

int main(int argv, char *argc[]) {
	int testCases;
	cin >>  testCases;
	while (testCases--) {
		solve();
	}
}
