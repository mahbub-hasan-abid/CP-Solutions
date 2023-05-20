//29march2023(11:49PM)
//30march2023(2:17PM)
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
int main()
{
    ll a,i,j,k,sum=0,n=6;
    vcd(vc);
 
    fl(i,0,n)
    {
        cin>>a;
        sum+=a;
        vc.pb(a);
    }
    if (sum%2==1)
    {
        no
        return 0;
    }
    for (int i=0; i<4; i++)
    {
         for (int j=i+1; j<5; j++)
         {
             for (int k=j+1; k<6; k++)
             {
                  if (vc[i]+vc[j]+vc[k]==sum/2)
                {
                    yes
                    return 0;
                }
             }
 
         }
 
 
 
    }
    no
    return 0;
 
 
 
 
 
}
 