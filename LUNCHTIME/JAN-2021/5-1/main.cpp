#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;

    while(t--){
        long long int a=0,b=0,c=0,n,k;
        cin>>n>>k;
        long long int x[n],y[n];
        for(long long int i=0;i<n;i++){
            cin>>x[i];
            if(x[i]%k!=0){y[a]=i;a++;}
        }
        long long int z[a],l[a];
        for(long long int i=0;i<a;i++){
            z[i]=x[y[i]]%k;
          //  cout<<"    "<<z[i]<<"    ";
        }
        for(long long int i=0;i<a;i++){
            for(long long int j=i;j<a;j++){
                if(z[i]+z[j]==k){b++;l[b-1]=1;}//cout<<i<<j<<endl;}
            }
        }

        for(long long int i=0;i<a;i++){
            if(l[i]=1){c++;}
        }
        //cout<<"  "<<b<<"  "<<a<<endl;
        if(b>=a){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}


        }
    return 0;
}
