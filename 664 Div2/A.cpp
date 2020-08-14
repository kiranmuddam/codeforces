
// Problem : A. Boboniu Likes to Color Balls
// Contest : Codeforces - Codeforces Round #664 (Div. 2)
// URL : https://codeforces.com/contest/1395/problem/A
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>

using namespace std;

void solve() {
	long long int R, G, B, W;
	
	cin >> R >> G >> B >> W;
	
	long long int firstMin = min(R, G);
	long long int modulusSum = 0;
	if (R == 0 or G == 0 or B == 0) {
		
		modulusSum += R % 2;
		modulusSum += G % 2;
		modulusSum += B % 2;
		modulusSum += W % 2;
		
		//cout << modulusSum << endl;
		
		if (modulusSum > 1) {
			cout << "No" << endl;
			return;
		} else {
			cout << "Yes" << endl; 
			return;
		}
		
	} else {
		modulusSum += R % 2;
		modulusSum += G % 2;
		modulusSum += B % 2;
		modulusSum += W % 2;
		
		if (modulusSum == 2) {
			cout << "No" << endl;
			return;
		} else {
			cout << "Yes" << endl;
			return;
		}
	}
}

int main(int argv, char *argc[]) { 
	
	long long int testCases;
	
	cin >> testCases;
	while (testCases--) {
		solve();
	}
}