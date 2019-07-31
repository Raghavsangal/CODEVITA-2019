#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=1005,mod=1000000007;
int tests,ncr[N][N];
inline int powermod(int a,int n){
 int result=1;
 a=a%mod;
 while(n>0){
  if(n & 1)
   result=(a*result)%mod;
  a=(a*a)%mod;
  n/=2;
 }
 return result;
}
int32_t main(){
 for(int i=0;i<N;i++){
    for(int r=0;r<N;r++){
      if(i<r)
        continue;
      if(i==r || r==0){
        ncr[i][r]=1;
        continue;
      }
      if(r==1){
        ncr[i][r]=i;
        continue;
      }
      ncr[i][r]=(ncr[i-1][r-1]+ncr[i-1][r])%mod;
    }
  }
 cin>>tests;
 while(tests--){
  int n,t,m;
  cin>>n>>t>>m;
  int a1=ncr[n][t],a2=ncr[n-m][t];
  int ans=a1-a2;
  if(ans<0)
   ans+=mod;
  int val=__gcd(ans,a1);
  while(val!=1){
   if(val!=0){
   ans/=val;
   a1/=val;
   val=__gcd(ans,a1);
  }
  }
  cout<<(ans*powermod(a1,mod-2))%mod<<endl;
 }
return 0;
}