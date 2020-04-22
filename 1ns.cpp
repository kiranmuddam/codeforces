#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int c=0;
        cin>>a>>b;
        long long int temp=b;
        long long int diff=abs(a-b);
        if(a==b){
            cout<<"0"<<endl;
        }
        else{
            c=c+(diff/5);
            diff=diff%5;
            c=c+(diff/2);
            diff=diff%2;
            printf("%4lld\n",c+diff);

                }
            
                }
         }

