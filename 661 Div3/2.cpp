#include<bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<long long int> candiesArray;
    vector<long long int> orangeArray;
    for (int i = 0; i < N; i++) {
        long long int currentInt;
        cin >> currentInt;
        candiesArray.push_back(currentInt);
    }
    for (int i = 0; i < N; i++) {
        long long int currentInt;
        cin >> currentInt;
        orangeArray.push_back(currentInt);
    }
    //sort(candiesArray.begin(),candiesArray.end());
    //sort(orangeArray.begin(), orangeArray.end());
    long long int moves = 0;
    long long int candiesMin = *min_element(candiesArray.begin(), candiesArray.end());
    long long int orangeMin = *min_element(orangeArray.begin(), orangeArray.end());
    for (int i = 0; i < N; i++) {
        long long int currentCandyDiff = abs(candiesArray[i] - candiesMin);
        long long int currentOrangeDiff = abs(orangeArray[i] - orangeMin);

        long long int currDiff = abs(currentCandyDiff - currentOrangeDiff);
        long long int currMin  = min(currentOrangeDiff, currentCandyDiff);
        moves += currDiff + currMin;
    }
    cout<<moves<<endl;
    return;
    

}
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int T;
cin>>T;
for(int j=0; j<T; j++){
solve();
}
}