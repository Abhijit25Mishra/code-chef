#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int meett1,meett2,sum;
        char cha,seg,peg;

        cin>>meett1>>cha>>meett2>>seg>>peg;
        sum=100*meett1+meett2;
        if(seg=='P'){sum+=1200;}
        if((seg=='P'||seg=='A')&&(meett1==12)){sum-=1200;}

        int n;
        cin>>n;

        int a[n],b[n],c[n],d[n],var1,var2,e[n],f[n];
        char p,q,r,x,y,z;

        for(int i=0;i<n;i++){
            cin>>a[i]>>p>>b[i]>>q>>r>>c[i]>>x>>d[i]>>y>>z;
            var1=100*a[i]+b[i];
            var2=100*c[i]+d[i];
            if(q=='P'){var1+=1200;}
            if(y=='P'){var2+=1200;}
            e[i]=var1;
            f[i]=var2;
            if((q=='A'||q=='P')&&a[i]==12){e[i]-=1200;}
            if((y=='A'||y=='P')&&c[i]==12){f[i]-=1200;}
       //     cout<<endl<<e[i]<<" "<<f[i]<<endl;
        }
        for(int i=0;i<n;i++){
            if(e[i]<=sum&&sum<=f[i]){cout<<1;}
            else{cout<<0;}
        }
        cout<<endl;
    }
    return 0;
}
