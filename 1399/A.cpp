#include<bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> myArray;
    for (int i = 0; i < N; i++) {
        int currentInt;
        cin >> currentInt;
        myArray.push_back(currentInt);
    }
    sort(myArray.begin(),myArray.end());
    int firstElement = myArray[0];
    for (int i = 1; i < N; i++)
    {
        int secondElement;
        secondElement = myArray[i];

        if (abs(firstElement - secondElement) > 1 ) {
            cout<<"NO"<<endl;
            return;
        }

        if (firstElement > secondElement) {
            firstElement = firstElement;
        } else {
            firstElement = secondElement;
        }
    }
    
    
    cout<<"YES"<<endl;
    return;

}




int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int T;
cin>>T;
for(int j = 0; j < T; j++) {
solve();
}
}