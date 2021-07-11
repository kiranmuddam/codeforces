#include <bits/stdc++.h>

using namespace std;

void solve() {
	pair<int, int> A;
	pair<int, int> B;
	pair<int, int> C;

	cin >> A.first >> A.second;
	cin >> B.first >> B.second;
	cin >> C.first >> C.second;

	int calc = (abs(A.first - B.first)) + (abs(A.second - B.second));

	if ((A.first == B.first) && (A.first == C.first)) {
		if ((A.second < B.second)  && ((C.second > A.second) && (C.second < B.second))) {
			calc = calc + 2;
		} else if ((A.second > B.second) && ((C.second < A.second) && (C.second > B.second))) {
			calc = calc + 2;
		}
	} else if ((A.second == B.second) & (A.second == C.second)) {
		if ((A.first < B.first) && ((C.first > A.first) && (C.first < B.first))) {
			calc = calc + 2;
		} else if ((A.first > B.first) && ((C.first < A.first) && (C.first > B.first))) {
			calc = calc + 2;
		}
	}

	cout << calc << endl;

}

int main(int argv, char *argc[]) {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int testCases;
	cin >>  testCases;
	while (testCases--) {
		solve();
	}
}
