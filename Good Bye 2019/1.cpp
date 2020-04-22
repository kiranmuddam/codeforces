/*
 * Filename: e:\codeforces\Good Bye 2019\1.cpp
 * Path: e:\codeforces\Good Bye 2019
 * Created Date: Sunday, December 29th 2019, 7:22:18 pm
 * Author : Kiran Babu Muddam | Zirus
 * Email : kiraniiitn@gmail.com
 * LinkedIn Profile : https://www.linkedin.com/in/kiranbabu-muddam/
 * CodeChef Profile : https://www.codechef.com/users/zirus
 * CodeForces Profile : https://codeforces.com/profile/zirus
 * Github Profile: https://github.com/Kiranbabu-Muddam
 * Description : A competitive programming contest problem submission
 */
#include<bits/stdc++.h>
#pragma GCC optimize ("O2")
#pragma GCC optimize ("unroll-loops")
using namespace std;
void solveProblem(){
    int n,k1,k2;
    cin>>n>>k1>>k2;
    vector<int> Player1, Player2;
    int Values;
    for(int i=0;i<k1;i++){
        cin>>Values;
        Player1.push_back(Values);
    }
     for(int i=0;i<k2;i++){
        cin>>Values;
        Player2.push_back(Values);
    }
    int max1=*max_element(Player1.begin(), Player1.end());
    int max2=*max_element(Player2.begin(), Player2.end());
    if(max1>max2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testCasesCount;
    cin>>testCasesCount;
    while(testCasesCount--){
        solveProblem();
    }
}