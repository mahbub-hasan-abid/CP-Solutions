 
//18march2023(11:01PM)
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
    faster;
    ll n,m,t,i,j,k,l,x,y,z,a,b,c,d,cnt=0,ans=0;
    string s,s1,s2,s3;
    cin>>a>>b>>c>>d>>x>>y;
    fl(n,x,y+1)
    {
        cnt=0;
 
       if(((((n%a)%b)%c)%d)==n)cnt++;
       if(((((n%a)%b)%d)%c)==n)cnt++;
       if(((((n%a)%d)%b)%c)==n)cnt++;
       if(((((n%d)%a)%b)%c)==n)cnt++;
       if(((((n%a)%c)%b)%d)==n)cnt++;
       if(((((n%a)%c)%d)%b)==n)cnt++;
       if(((((n%a)%d)%c)%b)==n)cnt++;
       if(((((n%d)%a)%c)%b)==n)cnt++;
       if(((((n%c)%a)%b)%d)==n)cnt++;
       if(((((n%c)%a)%d)%b)==n)cnt++;
       if(((((n%c)%d)%a)%b)==n)cnt++;
       if(((((n%d)%c)%a)%b)==n)cnt++;
       if(((((n%b)%a)%c)%d)==n)cnt++;
       if(((((n%b)%a)%d)%c)==n)cnt++;
       if(((((n%b)%d)%a)%c)==n)cnt++;
       if(((((n%d)%b)%a)%c)==n)cnt++;
       if(((((n%b)%c)%a)%d)==n)cnt++;
       if(((((n%b)%c)%d)%a)==n)cnt++;
       if(((((n%b)%d)%c)%a)==n)cnt++;
       if(((((n%d)%b)%c)%a)==n)cnt++;
       if(((((n%c)%b)%a)%d)==n)cnt++;
       if(((((n%c)%d)%b)%a)==n)cnt++;
       if(((((n%d)%c)%b)%a)==n)cnt++;
       if(((((n%c)%2)%d)%a)==n)cnt++;
       //cout<<n<<" "<<cnt<<endl;
       if(cnt>=7)ans++;
    }cout<<ans<<endl;
 
 
 
 
 // main();
}