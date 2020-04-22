/*
 * Author : Kiran Babu Muddam | Zirus
 * Email : kiraniiitn@gmail.com
 * LinkedIn Profile : https://www.linkedin.com/in/kiranbabumuddam/
 * CodeChef Profile : https://www.codechef.com/users/zirus
 * CodeForces Profile : https://codeforces.com/profile/zirus
 * Github Profile: https://github.com/Kiranbabumuddam
 * Description : A competitive programming contest problem submission
 */
#include<bits/stdc++.h>
#pragma GCC optimize ("O2")
#pragma GCC optimize ("unroll-loops")
using namespace std;
int solveProblem(){
    long long int unit,goodDays,badDays;
    cin>>unit>>goodDays>>badDays;
    long long int criteria=0;
    if(unit<=goodDays){
        cout<<unit<<endl;
    }
    else{
        if(unit%2!=0){
            criteria=((unit/2)+1/goodDays)*(goodDays+badDays);
        }else{
            criteria=((unit/2)/goodDays)*(goodDays+badDays);
        }
        if(criteria<=unit){
            cout<<criteria<<endl;
        }else{
            cout<<criteria-badDays<<endl;
        }
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