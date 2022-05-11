#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k=0,e=8;
        cin>>n;
        string given="abcdefghijklmnop",s;
        cin>>s;
        int times4=n/4;
        for(int i=0;i<times4;i++){
                e=8;k=0;
                int temp=(i*4)+4;
            for(int j=(i*4);j<(temp);j++){
                if(s[j]=='0'){k+=e*0;e=e/2;}
                else {k+=e*1;e=e/2;}
            }
            cout<<given[k];
        }
        cout<<endl;

    }
    return 0;
}
