
// Problem : C. Mere Array
// Contest : Codeforces - Codeforces Round #665 (Div. 2)
// URL : https://codeforces.com/contest/1401/problem/C
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>

using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

void solve() {
	long long int N;
	cin >> N;
	
	vector<int> intArray;
	unordered_map<long long int, long long int> freq;  
	for (int i = 0; i < N; i++) {
		long long int curr;
		cin >> curr;
		intArray.push_back(curr);
		freq[curr]++;
	}
	
	long long int minimum = *min_element(intArray.begin(), intArray.end());
	
	long long int maximum = *max_element(intArray.begin(), intArray.end());
	
	int i = 0;
	
	while (i < N) {
		if (intArray[i] % minimum != 0) {
			cout << "NO" << endl;
			return;
		} 
		
	}
	
}

int main(int argv, char *argc[]) {
	int testCases;
	cin >>  testCases;
	while (testCases--) {
		solve();
	}
}
