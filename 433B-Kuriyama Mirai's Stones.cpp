 
//4may2023(12:22PM)
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
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,sum=0,ans=0;
    string s,s1,s2,s3;
    cin>>n;
    vcd(vc1);
    vcd(vsbsort);
    vcd(vsasort);
    vsasort.pb(0);
    vsbsort.pb(0);
    fl(i,0,n)
    {
        cin>>a;
        vc1.pb(a);
        sum+=a;
        vsbsort.pb(sum);
 
    }
    sort(all(vc1));
    sum=0;
    fl(i,0,n)
    {
 
        sum+=vc1[i];
        vsasort.pb(sum);
 
    }
 
   // printvc(vsbsort);nl;
   // printvc(vsasort);nl;
    cin>>m;
    while(m--)
    {
        cin>>a>>b>>c;
        if(a==1)
        {
            cout<<vsbsort[c]-vsbsort[b-1]<<endl;
        }
        else
            cout<<vsasort[c]-vsasort[b-1]<<endl;
    }
 
 
 
 
  //main();
}