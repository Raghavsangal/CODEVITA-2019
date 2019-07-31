#include <iostream>
using namespace std;
const int N=1000005,mod=1000000007;
int dp[N][2],n;
int main(){
cin>>n;
dp[n][1]=1,dp[n][0]=1;
for(int i=n-1;i>=0;i--){
dp[i][0]=(dp[i+1][0]+dp[i+2][0])%mod;
dp[i][1]=((dp[i+1][1]+dp[i+2][1])%mod+dp[i+3][0])%mod;
}
cout<<dp[0][1]<<endl;
return 0;
}