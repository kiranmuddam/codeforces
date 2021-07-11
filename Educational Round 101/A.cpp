#include <bits/stdc++.h>

using namespace std;

void solve() {
    string currSequence;
    cin >> currSequence;
    queue<char> myQueue;

    if (currSequence.size() % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    if (currSequence[0] == ')' || currSequence[currSequence.size() - 1] == '(') {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

}

int main(int argv, char *argc[]) {
	int testCases;
	cin >>  testCases;
	while (testCases--) {
		solve();
	}
}
