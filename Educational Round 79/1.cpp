#include<bits/stdc++.h>
using namespace std;
void solveProblem(){
    long long int r,g,b,min;
        vector<long long int> Arr;
        cin>>r>>g>>b;
        Arr.push_back(r);
        Arr.push_back(g);
        Arr.push_back(b);
        sort(Arr.begin(),Arr.end());
        min=std::min((r+g+b)/2,Arr[0]+Arr[1]);
        if(min==(r+g+b)/2){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
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