
// Problem : B. Boboniu Plays Chess
// Contest : Codeforces - Codeforces Round #664 (Div. 2)
// URL : https://codeforces.com/contest/1395/problem/B
// Memory Limit : 512 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)


#include <bits/stdc++.h>

using namespace std;

void printRow(int rows, int columns, int counter, int X, int Y) {
	if(counter % 2 == 0) {
		for (int i = 1; i <= columns; i++) {
			if ((rows == X and i == Y) or (rows == 1 and i == Y)) {
				continue;
		    }
		cout<< rows <<' ' << i <<endl;

	}
	} else {
		for (int i = columns; i >= 1; i--) {
			if (rows == X and i == Y){
				continue;
		}
		cout<< rows <<' ' << i <<endl;
	}
	}
}

void solve() {
	int N, M, X, Y;
	
	cin >> N >> M >> X >> Y;
	
	cout << X <<' '<<Y << endl;
	cout<<1 <<' ' << Y <<endl;
	int counter = 0;
	
	for (int i = 1; i <= N; i++) {
		printRow(i, M, counter, X, Y);
		counter++;
	}
	
	
	
}

int main(int argv, char *argc[]) { 
	
	solve();
}