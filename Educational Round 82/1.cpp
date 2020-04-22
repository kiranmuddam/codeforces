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
    string inputString;
    cin>>inputString;
    long long int minSize=0,currIthIndex=-1;
    for(int i=0;i<inputString.size();i++){
        if(inputString[i]=='1'){
            if(currIthIndex==-1){
                currIthIndex=i;
            }else{
                if(i-currIthIndex>=2){
                    minSize=minSize+((i-currIthIndex)-1);
                    currIthIndex=i;
                }
                currIthIndex=i;
            }
            
        }
    }
    cout<<minSize<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testCasesCount;
    cin>>testCasesCount;
    while(testCasesCount--){
        solveProblem();
    }
}