#include <bits/stdc++.h>

using namespace std;

void solve() {
	string alphabet;
	cin >> alphabet;
    int left = 0;
	int right = alphabet.size() - 1;

	for (int i = alphabet.size() - 1; i >= 0; i--) {
		char mychar = 97 + i;
		if (alphabet[left] == mychar) {
			left++;
		} else if (alphabet[right] == mychar) {
			right--;
		} else {
			cout << "NO" << endl;
			return;
		}
	}

	cout << "YES" << endl;
}

int main(int argv, char *argc[]) {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int testCases;
	cin >>  testCases;
	while (testCases--) {
		solve();
	}
}
