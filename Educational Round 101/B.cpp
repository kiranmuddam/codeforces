#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, M;
    vector<int> NArray;
    vector<int> MArray;
    cin >> N;


    for (int i = 0; i < N; i++) {
        int curr;
        cin >> curr;
        NArray.push_back(curr);
    }

    cin >> M;

    for (int i = 0; i < M; i++) {
        int curr;
        cin >> curr;
        MArray.push_back(curr);
    }

    for (int i = 1; i < N; i++) {
       NArray[i] = NArray[i] + NArray[i - 1];
    }

    for (int i = 1; i < M; i++) {
       MArray[i] = MArray[i] + MArray[i - 1];
    }

    int maxNArray = *max_element(NArray.begin(), NArray.end());
    int maxMArray = *max_element(MArray.begin(), MArray.end());

    if (maxNArray < 0 && maxMArray > 0) {
        cout << maxMArray << endl;
    } else if (maxMArray < 0 && maxNArray > 0) {
        cout << maxNArray << endl;
    } else if (maxNArray >= 0 && maxMArray >= 0) {
        cout << maxMArray + maxNArray << endl;
    } else {
        cout << 0 << endl;
    }

}

int main(int argv, char *argc[]) {
	int testCases;
	cin >>  testCases;
	while (testCases--) {
		solve();
	}
}
