#include<bits/stdc++.h>

using namespace std;

vector<pair<int, int>> sumFrequency;


void findSumFrequency (vector<int> weightsArray, int sum) {
    int i = 0, j = weightsArray.size() - 1;
    int counter = 0;
    while (i < j) {
        int currentSum = weightsArray[i] + weightsArray[j];
        if (currentSum == sum) {
            counter++;
            i++;
            j--;
        } else if (currentSum > sum) {
            j--;
        } else {
            i++;
        }
    }
    sumFrequency.push_back(make_pair(sum,counter));
}

void solve() {

    sumFrequency = {};
    vector<int> weightsArray; 
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {  
       int currentWeight;
       cin >> currentWeight;
       weightsArray.push_back(currentWeight);
    }

    sort(weightsArray.begin(), weightsArray.end());
    
    for (int i = 2; i <= 100 ; i++) {
        findSumFrequency(weightsArray, i);
    }

    /* for (int i = 0; i < sumFrequency.size(); i++) {
        cout<<"SUM: "<<sumFrequency[i].first<<" COUNT: " <<sumFrequency[i].second<<endl;
    }*/
    
    
    auto maxPair = *max_element(sumFrequency.begin(), sumFrequency.end(), [](const auto& lhs, const auto& rhs) { return lhs.second < rhs.second; });
    cout<<maxPair.second<<endl;
    }


int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int T;
cin>>T;
for(int j = 0; j < T; j++) {
solve();
}
}