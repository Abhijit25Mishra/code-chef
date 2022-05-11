#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m],suma=0,sumb=0,count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            suma+=a[i];
        }
        for(int j=0;j<m;j++)
        {
            cin>>b[j];
            sumb+=b[j];
        }
        bool flag=true;
        while(suma<=sumb)
        {
            sort(a,a+n);
            sort(b,b+m);
            int i=0;
            if(a[i]<b[i])
            {

                swap(a[i],b[i]);
                count+=1;
            }
            else
            {
                bool flag=false;
                cout<<"-1"<<"\n";
                break;
            }

        }
        if(flag==true)
        {cout<<count<<"\n";}


    }
    return 0;
}
