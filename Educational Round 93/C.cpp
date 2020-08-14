
// Problem : C. Good Subarrays
// Contest : Codeforces - Educational Codeforces Round 93 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1398/problem/C
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>

using namespace std;

void solve() {
	long long int N;
	cin >> N;
	string inputString;
	cin >> inputString;
	
	vector<long long int> intArray;
	
	for (int i = 0; i < inputString.size(); i++) {
		intArray.push_back((int)inputString[i] - '0');
	}
	int totalGood = 0;
	
	for (int i = 1; i <= N; i++) {
		long long int windowSum = 0;
		
		int windowStart = 0;
		
		for (int windowEnd = 0; windowEnd < intArray.size(); windowEnd++) {
			windowSum += intArray[windowEnd];
			if (windowEnd >= i - 1) {
				if (windowSum == i) {
					totalGood++;
				}
				windowSum -= intArray[windowStart];
				windowStart++;
			}
		}
	}
	cout << totalGood << endl;
}

int main(int argv, char *argc[]) {
	int testCases;
	cin >>  testCases;
	while (testCases--) {
		solve();
	}
}
