#include<iostream>
using namespace std;
int main(){
    int a,b,t;
    cin>>t;
    for(int i=0;i<t;i++){
        int c=0;
        cin>>a>>b;
        if(a==b)
            cout<<"0"<<endl;
        int temp=b;
        else if(b<a){
            while(temp!=a){
                int diff=a-b;
                if((temp+5)<=a){
                    temp=temp+5;
                    c=c+1;
                }
                else if((temp+2)<=a){
                    temp=temp+2;
                    c=c+1;
                }
                else if((temp+1)<=a){
                    temp=temp+1;
                    c=c+1;
                }

            }
        }
        else if(b>a){
             while(temp!=a){
                int diff=b-a;
                if((temp-5)>=a){
                    temp=temp-5;
                    c=c+1;
                }
                else if((temp-2)>=a){
                    temp=temp-2;
                    c=c+1;
                }
                else if((temp-1)>=a){
                    temp=temp-1;
                    c=c+1;
                }

            }
        }
        cout<<c<<endl;
    }
}