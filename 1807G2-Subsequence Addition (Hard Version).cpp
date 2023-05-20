 
//13april2023(12:34PM)
//13april2023(3:46PM)
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
int sol()
{
    ll n,sum=0,i;
    cin>>n;
    vcd(vc);
    getintovc(vc,n);
   // cout<<n<<endl;
    if(vc.size()==1)
    {
       // cout<<"n=1"<<endl;
        if(vc[0]==1)
        {
            yes;
            return 0;
        }
        else
        {
            no;
            return 0;
        }
    }
    else
    {
        sort(vc.begin(),vc.end());
        sum=1;
        fl(i,0,vc.size())
        {
            if(vc[i]<=sum)
            {
                if(i==0)sum=0;
                sum+=vc[i];
            }
            else
            {
                //cout<<sum<<endl;
                no;
                return 0;
            }
           // cout<<"sum="<<sum<<endl;
        }
    }
    yes;
    return 0;
 
 
 
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