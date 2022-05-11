#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int bmi=(a/(b*b));
        if(bmi<=18){cout<<1<<endl;}
        else if(bmi>18 && bmi<25){cout<<2<<endl;}
        else if(bmi>=25 && bmi <30){cout<<3<<endl;}
        else{cout<<4<<endl;}
    }
    return 0;
}
