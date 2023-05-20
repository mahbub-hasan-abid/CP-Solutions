//15jan2023(10:02PM)
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y) for( i=x; i<y; i++)
#define flc(i,x,y,z) for(int i=x; i<y; i+=z)
#define nl cout<<endl
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define vcd(v) vector<ll> (v);
#define vcsort(vc) sort(v.begin(), v.end());
#define vcsortg(vc) sort(v.begin(), v.end(), greater<int>());
#define getintovc(vc,n) { while(n--) {long long yyy; cin>>yyy; vc.push_back(yyy);}}
#define all(x) x.begin(),x.end()
#define pb push_back
#define printvc(vc) for(int i=0; i<vc.size(); i++) cout<<vc[i]<<" ";
#define ff first
#define ss second
#define faster; {ios::sync_with_stdio(false); cin.tie(NULL);}
//--------------------------------------------------------------


int main()
{
    ll i,a,b,c,d,e=0;
   char sss,ss;
   string s;
   cin>>s;
   if(s.size()!=8)cout<<"No"<<endl;
   else
   {
       ss=s[0];
       sss=s[s.size()-1];
       fl(i,1,7)
       {
           e=(e*10)+(s[i]-48);
       }
       if(e>=100000&&e<=999999&&ss>='A'&&ss<='Z'&&sss>='A'&&sss<='Z')
        cout<<"Yes"<<endl;
       else cout<<"No"<<endl;

   }
  // cout<<e<<endl;
  // cout<<ss<<endl;
   //cout<<sss<<endl;




//main();


}
