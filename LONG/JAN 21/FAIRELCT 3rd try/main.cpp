#include <iostream>
#include <bits/stdc++.h>

long long smaller_of(long long a, long long b){
    if(a>b){return b;}
    else {return a;}
}
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,m,suma=0,sumb=0;
        cin>>n>>m;
        long long a[n],b[m];
        for(int i=0;i<n;i++){cin>>a[i];suma+=a[i];}
        for(int i=0;i<m;i++){cin>>b[i];sumb+=b[i];}

        long long counter=0,z=sumb-suma,p=0;
        while(suma<=sumb){
            sort(a,a+n);
            sort(b,b+m,greater<>());
            if(a[0]<b[0]){
                suma=suma+b[0]-a[0];
                sumb=sumb+a[0]-b[0];
                int tmp=a[0];
                a[0]=b[0];
                b[0]=tmp;
                counter++;
            }
            else{
                p=1;
                cout<<-1<<endl;
                break;
            }
        }
        if(p==0){cout<<counter<<endl;}
    }
    return 0;
}
