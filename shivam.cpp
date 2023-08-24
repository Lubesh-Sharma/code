#include "bits/stdc++.h"
using namespace std;
 
#define ll long long int
 
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
 
#define pb push_back
#define sz(a) (int)a.size()
void solve() {
   string s,ans="";
   cin >> s;
   for(int i=0;i<s.size();i++){
       if(s[i]>='A' && s[i]<='Z')s[i]=s[i]+'a'-'A';
       if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='y' )continue;
        else {ans+='.';ans+=s[i];}
   }
   cout<<ans<<endl;
}
 
int32_t main() {
   
    
        solve();
    
}
