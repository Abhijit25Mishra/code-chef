#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long only_pos(long long a){
    if(a>0){return a;}
    else{return -a;}
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long m,n,big,small,a_sum=0,b_sum=0,c_sum=0;
        cin>>n>>m;
        long long a[n],b[m];
        if(n>m){big=n;small=m;}
        else{big=m;small=n;}
        long c[small];

        for(int i=0;i<n;i++){
            cin>>a[i];
            a_sum=a_sum+a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            b_sum+=b[i];
        }
        sort(a,a+n);
        sort(b,b+m,greater<>());
        for(int i=0;i<small;i++){
            if(b[i]>a[i]){c[i]=b[i]-a[i];}
            else{c[i]=0;}
                          //                    cout<<endl<<c[i]<<endl;
            c_sum+=c[i];
        }
                                              //sort(c,c+small,greater<>());

                                                //a is our guy and b is opponent
        long long z=b_sum-a_sum;
                             //                    cout<<endl<<z<<endl;
        long long p=0,q,r;

        if(c_sum==0){
            if(a_sum>b_sum){cout<<0<<endl;}
            else {cout<<-1<<endl;}
        }
        else if(c_sum>0){
            if(z-2*c_sum>=0){cout<<-1<<endl;}
            else {
                for(int i=0;i<small;i++){
                    if(p<z){
                        p+=2*c[i];
                        q=i+1;
                                        //                       cout<<endl<<p<<" "<<z<<" "<<q<<endl;
                    }
                }
                cout<<q<<endl;
            }

        }






      /*  if(z>=0){
            for(int i=0;i<small;i++){
                if(z>p){
                p+=2*c[i];
                q=i+1;
                }
                else{continue;}
            }
            if(p>z-a_sum){cout<<q<<endl;}
            else{
            cout<<-1<<endl;
            }
        }
        else {cout<<0<<endl;}
            */
    }
    return 0;
}
