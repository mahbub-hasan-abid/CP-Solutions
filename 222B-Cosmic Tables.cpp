 
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
    ll n,m,t,i,j,k,x,y,z,a,b,c;
 
    char cc;
    vcd(vrow);
    vcd(vcol);
    bool cl=true;
    cin>>n>>m>>k;
    ll arr[n][m];
    fl(i,0,n)
    {
        vrow.pb(i);
        fl(j,0,m)
        {
            if(cl)
                vcol.pb(j);
            cin>>arr[i][j];
        }
        cl=false;
    }
    fl(i,0,k)
    {
        cin>>cc>>x>>y;
        if(cc=='c')
            swap(vcol[x-1],vcol[y-1]);
        else if(cc=='r')
            swap(vrow[x-1],vrow[y-1]);
        else //if(cc=='g')
            cout<<arr[vrow[x-1]][vcol[y-1]]<<endl;
 
    }
 
 
 
}
 
int main()
{
    faster;
    ll tc;
 
        sol();
 
 
 
 
 
 
  //main();
}