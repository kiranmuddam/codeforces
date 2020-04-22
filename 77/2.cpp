/*
 * Created: 2019-11-27 18:13:23
 * Author : Kiran Babu Muddam | Zirus
 * Email : kiraniiitn@gmail.com
 * LinkedIn Profile : https://www.linkedin.com/in/kiranbabu-muddam/
 * CodeChef Profile : https://www.codechef.com/users/zirus
 * CodeForces Profile : https://codeforces.com/profile/zirus
 * Github Profile : https://github.com/Kiranbabu-Muddam
 * Description: 
 */
#include<bits/stdc++.h>
using namespace std;
long long int a,b,x,s1=0,s2=0;
long long int eq1(long long int a,long long int b,long long int x){
    long long int temp=a;
    long long int temp1=b;
    temp=a-x;
    temp1=b-2*x;
    if((temp==0 && temp1==0) || temp*2==temp1 || temp==temp1*2){
        s1=1;
    }
    temp=a-2*x;
    temp1=b-x;
    if((temp==0 && temp1==0) || temp*2==temp1 || temp==temp1*2){
        s2=1;
    }
    if((s1==0 || s2==0)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    }
int main(){
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int t;
cin>>t;
for(int i=0;i<t;i++){
cin>>a>>b;
if((a==0 and b==0) || (a*2==b) || (b*2==a)){
    cout<<"YES"<<endl;
}
else{
    eq1(a,b,(b/a));
}
}
}