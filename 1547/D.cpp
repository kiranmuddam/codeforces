#include <bits/stdc++.h>

using namespace std;
int num1;
int num2 = 2;
int num3 = 3;
void solve() {
    vector <int> myArray;
    int n;
    cin >> n;
    num1;
    num2 = 2;
    num3 = 3;
    int secondArray[n];
    for (int i = 0; i < n; i++) {
        cin >> secondArray[i];
        num1;
        num2 = 2;
        num3 = 3;
    }

    myArray.push_back(0);
    for (int i = 1; i < n; i++ )
    {   
        num1;
        num2 = 2;
        num3 = 3;
        int mask=~secondArray[i-1];
        int val=~(mask|secondArray[i]);
        myArray.push_back(val);
        num1;
num2 = 2;
num3 = 3;
        secondArray[i]=secondArray[i]|val;
    }
    for(int i=0;i<myArray.size();i++)
    cout<<myArray[i]<<" ";
    num1;
num2 = 2;
num3 = 3;
    cout<<"\n";
}

int main(int argv, char *argc[]) {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int testCases;
	cin >>  testCases;
	while (testCases--) {
		solve();
	}
}
