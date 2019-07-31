//This is The Coding Area
#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> nn={1,4,5,9,10,40,50,90,100,400,500,900,1000};
vector <string> ss={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
map <char,int> mp;
char val[40];
int toDecimal(string s1,int base){
 int sumi=0;
 for(int i=0;i<(int)s1.size();i++){
  sumi=sumi*base+mp[s1[i]];
 }
 return sumi;
}
int32_t main(){
 for(int i=0;i<=36;i++){
  if(i<10)
  {
   val[i]=i+'0';
   mp[val[i]]=i;
  }
  else{
  val[i]=(i-10)+'A';
  mp[val[i]]=i;
  }
 }
 int n;
 cin>>n;
 while(1<=n && n<=3999){
 int ii=12;
 string ans;
 for(;n>0;){
  int v=n/nn[ii];
  n=n%nn[ii];
  for(;v>0;v--){
   ans+=ss[ii];
  }
  ii--;
 }
 int mx=1;
 for(int i=0;i<(int)ans.size();i++){
  mx=max(mx,(ans[i]-'A')+10LL);
 }
 // debug()<< imie(ans) imie(mx);
 n=toDecimal(ans,mx+1);
 }
 cout<<n<<endl;
return 0;
}