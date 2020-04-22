/*
 * Filename: e:\codeforces\Good Bye 2019\2.cpp
 * Path: e:\codeforces\Good Bye 2019
 * Created Date: Sunday, December 29th 2019, 7:22:24 pm
 * Author : Kiran Babu Muddam | Zirus
 * Email : kiraniiitn@gmail.com
 * LinkedIn Profile : https://www.linkedin.com/in/kiranbabu-muddam/
 * CodeChef Profile : https://www.codechef.com/users/zirus
 * CodeForces Profile : https://codeforces.com/profile/zirus
 * Github Profile: https://github.com/Kiranbabu-Muddam
 * Description : A competitive programming contest problem submission
 */
#include<bits/stdc++.h>
using namespace std;
void solveProblem(){
    long long int n,value;
    cin>>n;
    vector<long long int> Arr;
    for(int i=0;i<n;i++){
        cin>>value;
        Arr.push_back(value);
    }
    for(int i=0;i<n;i++){
        long long int mxi=Arr[i];
        long long int mni=Arr[i];
        for(int j=i+1;j<n;j++){
            mxi=max(mxi,Arr[j]);
            mni=min(mni,Arr[j]);
            //cout<<mxi<<" "<<mni<<endl;
            if(mxi-mni>=j-i+1){
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<j+1<<endl;
                goto theend;
            }

        }
    }
    cout<<"NO"<<endl;
theend:;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testCasesCount;
    cin>>testCasesCount;
    while(testCasesCount--){
        solveProblem();
    }
    return 0;
}