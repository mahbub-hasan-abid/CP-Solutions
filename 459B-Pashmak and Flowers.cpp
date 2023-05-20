//26-9-2022(11:19PM)
//16march2023(8:59PM)
 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  t,mx=0,n,c1=0,c2=0,x,y;
   // long long a[100000];
    cin>>n;
   /* vcd(vc);
    getintovc(vc,n);*/
    vector<long long>vc;
    for(int i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        vc.push_back(a);
 
    }
    //n=vc.size();
    sort(vc.begin(),vc.end());
    /*for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);*/
        x=vc[0];
        y=vc[n-1];
    for(int i=0; i<n; i++)
    {
 
            if(vc[i]==x)
            c1++;
              if(vc[i]==y)
            c2++;
 
 
 
 
    }
    if(vc[n-1]-vc[0]==0)
        {
        cout<<vc[n-1]-vc[0]<<" "<<(n*(n-1))/2<<endl;
 
        }
       else
          cout<<vc[n-1]-vc[0]<<" "<<c1*c2<<endl;
 
}