 
//23march2023(1:12AM)
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
    ll n,m,i,co=0,ce=0;
    cin>>n>>m;
    vcd(vc);
    fl(i,0,n)
    {
       ll xx;
       cin>>xx;
       if(xx%2==0)ce++;
       else co++;
    }
    if(co==0)no
    else if(ce<m)
    {
        m=m-ce;
        if(m>co)no
            else
            {
                if(m%2!=0)yes
                    else if(m%2==0)
                {
                    if(m==co)no
                        else if(co>m&&ce!=0)yes
                        else no
 
                }
            }
    }
    else if(ce>=m)
    {
        if(co>0)yes
            else no
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