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
 int dig(ll b)
 {
     ll cnt=0;
     while(b!=0)
     {
         b/=10;
         cnt++;
     }
     return cnt;
 }
int main()
{
    faster;
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    string s1,s2,s3;
    char cc;
    cin>>a>>b>>x;
    ll s=1,mid=0,e=1e9;
    ll minSum=10e18;

        bool xx=true;
        while(s<=e)
        {

            mid=(s+e)/2;//cout<<mid<<endl;
            ll digOfmid=dig(mid);
            ll fsum=(a*mid)+(b*digOfmid);
           // cout<<"mid="<<mid<<"  fsum="<<fsum<<endl;
            if(fsum<=x)
            {

                ll dis=x-fsum;
               // cout<<"ans change hobeeeeeeeeeeeeeeeeee  dis = "<<dis<<endl;
                if(dis<=minSum)
                {
                    //cout<<"ebar dhukche"<<endl;
                    minSum=dis;
                    ans=mid;
                }

            }

            if(fsum==x)
            {
                //cout<<"mid="<<mid<<endl;
                xx=false;
                break;
            }
            else if(fsum>x)
            {
                e=mid-1;
            }
            else //if(vc[mid]<k)
                s=mid+1;
        }
        //if(xx)
        cout<<ans<<endl;


    }

