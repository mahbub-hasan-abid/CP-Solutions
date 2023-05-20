 
//12march2023(4:00PM)
//12march2023(7:10PM)
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
    ll n,a,i,n0=0,n2=0,n1=0,avg,ans=0,cnt=0;
    cin>>n;
    vcd(vc);
    fl(i,0,n)
    {
       cin>>a;
       if(a%3==0)n0++;
       else if(a%3==1)n1++;
       else n2++;
    }
    avg=n/3;
    ans=(avg-n0)+(avg-n1)+(avg-n2);
    while(1)
    {
        if(n0==n1&&n1==n2)break;
        else
        {
            if(n0>avg)
            {
                n0--;
                n1++;
                cnt++;
            }
            else if(n1>avg)
            {
                n1--;
                n2++;
                cnt++;
            }
             else if(n2>avg)
            {
                n2--;
                n0++;
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
 
 
 
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