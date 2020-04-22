#include<bits/stdc++.h>
using namespace std;
void solveProblem(){
    int parts,seconds,Maximum,MaximumPosition,currelement,totalSum,tempSum;
    cin>>parts>>seconds;
    vector<int> Arr;
    while(parts--){
        cin>>currelement;
        Arr.push_back(currelement);
    }
    Maximum=0;
    MaximumPosition=0;
    totalSum=Maximum;
    for(int i=0;i<Arr.size();i++){
        if(Arr[i]>Maximum){
            Maximum=Arr[i];
            MaximumPosition=i+1;
        }
        tempSum=totalSum+Arr[i];
        if(tempSum>seconds){
            cout<<MaximumPosition<<endl;
            break;
        }
        if((i==Arr.size()-1) and tempSum<=seconds){
            cout<<"0"<<endl;
        }
        totalSum=totalSum+Arr[i];
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