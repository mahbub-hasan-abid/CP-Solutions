 
//17march2023(3:52PM)
//17march2023(4:32PM)
//17march2023(4:51PM)
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
/*int check(float a)
{
 
    ll sq=a;
   // cout<<"sq="<<sq<<endl;
    if(sq==a)
        return 1;
    else return 0;
}*/
int main()
{
    faster;
    ll n,x1,x2,x3,x4,y1,y2,y4,y3,cnt=0,ans=0;
    string s,s1,s2,s3;
 
    cin>>x1>>y1>>x2>>y2;
    float dis=sqrt(((x1-x2)*(x1-x2))+(y1-y2)*(y1-y2));
    if(x1==x2||y1==y2||abs(x1-x2)==abs(y1-y2))
    {
    if(x1==x2||y1==y2)
    {
 
        if(x1==x2)
        {
            cout<<x1+dis<<" "<<y1<<" "<<x1+dis<<" "<<y2<<endl;
        }
        else if(y1==y2)
        {
            cout<<x1<<" "<<y1+dis<<" "<<x2<<" "<<y2+dis<<endl;
        }
 
    }
    else
        {
                if(y1<y2)
                cout<<x1<<" "<<y1+abs(x1-x2)<<" "<<x2<<" "<<y2-abs(x1-x2)<<endl;
                else
                cout<<x1<<" "<<y1-abs(x1-x2)<<" "<<x2<<" "<<y2+abs(x1-x2)<<endl;
 
 
            //}
 
        }
    }
    else cout<<-1<<endl;
 
 
  //main();
}
 
 
 
 
 
 
 
 
 
 