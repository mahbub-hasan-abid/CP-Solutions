//12march2023(7:44PM)
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
    ll n,m,t,i,j,k,x,y,z,a,b,c,sum=0,cnt=0,ans=0,rem=0,div=0;
    string s,s1,s2,s3;
    cin>>n;
    vcd(vc);
    fl(i,0,7)
    {
        cin>>a;
        sum=sum+a;
        vc.pb(sum);
    }
    div=n/sum;
    rem=n%sum;
    //cout<<sum<<endl;
    if(rem==0)
    {
        n=n-(sum*(div-1));
        rem=n;
       /* cout<<n<<endl;
        if(n==0)
        {
            cout<<7<<endl;
            return 0;
        }*/
    }
 
 
 
    fl(i,0,7)
    {
        if(vc[i]>=rem)
        {
            cout<<i+1<<endl;
            break;
        }
    }
 
 
 
 
 
    //main();
}
 
 
 
 
 
 