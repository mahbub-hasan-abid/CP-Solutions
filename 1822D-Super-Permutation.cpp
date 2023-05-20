 
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
#define p-1 cout<<"-1"<<endl;
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
void sol()
{
    ll n,i,sum=0;
    cin>>n;
    if(n==1)cout<<1<<endl;
 
   else if(n%2!=0)cout<<-1<<endl;
   else
   {
       ll cnt=0;
       ll i=3,pro2;
       ll f=1;ll s=2;
 
       cout<<n<<" "<<n-1<<" ";
       ll sum=n+n-1;
       ll pro1;
      // cout<<sum<<endl;
       while(cnt!=n-2)
       {
           pro1=n*(i-1);
           cout<<(pro1+f)-sum<<" ";
           sum=(pro1+f);
                 // cout<<sum<<endl;
                  pro2=n*i;
 
           f++;cnt++;
           cout<<(pro2-s)-sum<<" ";
           sum=(pro2-s);      // cout<<sum<<endl;
 
           s++;cnt++;
           i++;
       }
 
       cout<<endl;
   }
 
 
 
}
 
int main()
{
    faster;
    ll tc;
    cin>>tc;
    while(tc--)
        sol();
 
 
 
 
 
 
  //main();
}