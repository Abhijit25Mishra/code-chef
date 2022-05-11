#include <iostream>

using namespace std;

int Sum_of_digits(int a)
{
    long long int res=0,b=0;
    while(a>=0){
        b=a%10;
        res=res+b;
        a=a/10;
        if(a==b){break;}

    }
    return (res+1);
}


int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long int n,s,p,a=0,b=0;
        cin>>n>>s>>p;
        a=Sum_of_digits(s);
        b=Sum_of_digits(p);
        if(a==b){cout<<"yes"<<endl;}
        else{cout<<"no"<<endl;}
    }
    return 0;
}
