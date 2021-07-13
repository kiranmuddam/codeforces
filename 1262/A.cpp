#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    long int n;
    long long int l,r;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        long long int a=99999999999;
        long long int  b=0;
        for(int j=0;j<n;j++){
            cin>>l>>r;
            if(r<a){
                a=r;
            }
            if(l>b){
                b=l;
            }
        }
        if((b-a)<0){
            cout<<0<<endl;
        }
        else{
            cout<<b-a<<endl;
        }
    }
}
