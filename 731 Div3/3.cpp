#include <bits/stdc++.h>

using namespace std;

void solve() {
	int k, n, m;
	cin >> k >> n >> m;
	vector<int> nArray;
	vector<int> mArray;
	vector<int> sequence;
	int totalLines = k;


	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		nArray.push_back(temp);
	}


	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		mArray.push_back(temp);
	}

	int left = 0;
	int right = 0;

	while ((left < n) || (right < m)) {
		if (left < n) {
			if (nArray[left] == 0) {
				totalLines++;
				sequence.push_back(nArray[left]);
				left++;
				continue;
			} else if (nArray[left] <= totalLines) {
				sequence.push_back(nArray[left]);
				left++;
				continue;
			}
		}
		if (right < m) {
			if (mArray[right] == 0) {
				totalLines++;
				sequence.push_back(mArray[right]);
				right++;
				continue;
			} else if (mArray[right] <= totalLines) {
				sequence.push_back(mArray[right]);
				right++;
				continue;
			}
		}
		cout << -1 << endl;
		return;
	}
	for (int i = 0; i < sequence.size(); i++) {
		cout << sequence[i] << " ";
	}
	cout << endl;

}

int main(int argv, char *argc[]) {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int testCases;
	cin >>  testCases;
	while (testCases--) {
		solve();
	}
}
