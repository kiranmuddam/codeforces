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
int main(){
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
long int n;
long long int c,sum;
cin>>n;
for(int i=0;i<n;i++){
cin>>c>>sum;
    long long int rem,div,ans;
    div=sum/c;
    rem=sum%c;
    ans=pow(div,2)*(c-rem)+pow(div+1,2)*rem;
    cout<<ans<<endl;
}
}