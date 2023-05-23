//15april2023(11:02PM)
//15april2023(11:52PM)
//17april2023(11:29PM)
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
#define vcsortg(v) sort(v.begin(), v.end(), greater<int>());
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
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    string s,s1,s2,s3;
    cin>>n>>m;
    vcd(vc);
    vcd(vc1);
    getintovc(vc,m);
    m=vc.size();
    vc1=vc;
    sort(all(vc));
    // for lowest
    ll sum1=0;
    k=n;
    i=0;
 
    while(k--)
    {
        // cout<<vc[i]<<" "<<sum1<<endl;
        sum1+=vc[i];
        vc[i]=vc[i]-1;
        if(vc[i]==0)i++;
    }
//cout<<"sum1="<<sum1<<endl;
    //for biggest
    ll sum2=0;
 
    // printvc(vc1);
    i=0;
    k=n;
    while(k--)
    { vcsortg(vc1);
        sum2+=vc1[0];
        vc1[0]=vc1[0]-1;
    }
   /* while(k--)
    {
        if(m==1)
        {
 
                    sum2+=vc1[i];
                    vc1[i]=vc1[i]-1;
 
        }
        else
        {
            if(i!=vc1.size()-1)
            {
                if(vc1[i]>=vc1[i+1])
                {
                    sum2+=vc1[i];
                    vc1[i]=vc1[i]-1;
                }
                else if(vc1[i]<vc1[i+1])
                {
                    i++;
                    k++;
                }
            }
            else if(i==vc1.size()-1)
            {
                if(vc1[i]>=vc1[i-1])
                {
                    sum2+=vc1[i];
                    vc1[i]=vc1[i]-1;
                }
                else if(vc1[i]<vc1[i-1])
                {
                    i=0;
                    k++;
                }
            }
 
        }
 
 
 
 
    }*/
 
    cout<<sum2<<" "<<sum1<<endl;
 
 
 
 
 
    //main();
}