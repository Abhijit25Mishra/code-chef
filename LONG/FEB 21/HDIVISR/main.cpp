#include <iostream>

using namespace std;

int main()
{
    int t,a,b=10;
    cin>>t;
    a=t;

    while(t--){
        if(a%b==0){cout<<b<<endl;break;}
        b--;
    }
    return 0;
}
