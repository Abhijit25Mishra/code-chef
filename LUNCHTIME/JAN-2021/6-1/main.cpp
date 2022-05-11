#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
    long long int zero=0,one=0,n,k=0;
    cin>>n;
    long long x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(x[i]==1){zero++;}
        else{one++;}
    }
    k=min(one,zero);
    long long int z1=zero;
    long long int o1=0;

    for(int i=0;i<n;i++){
        if(x[i]==1){o1++;}
        else{z1--;}
        k=min(k,z1+o1);
    }
    cout<<k<<endl;

    }
    return 0;
}
