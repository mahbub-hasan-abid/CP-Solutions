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
    ll n,m,t,i,j,k,x,y,z,a,b,c,d,cnt=0,ans=0;
    string s,s1,s2,s3;
    cin>>n>>m;


    while(1)
    {
        b=n%10;
        a=n/10;
        d=m%10;
        c=m/10;
        ll ac=(a*10)+c;
        ll bd=(b*10)+d;
     //   cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
      //  cout<<"n="<<n<<" m="<<m<<endl;
      //  cout<<ac<<" "<<bd<<endl;

       if(ac<=23&&bd<=59)
       {
           cout<<n<<" "<<m<<endl;
           break;
       }
       else
       {
           m++;
           if(m==60)
           {
               m=0;
               n++;
               if(n==24)
               {
                   n=0;
                   m=0;
               }
           }
       }
    }




    //main();
}
