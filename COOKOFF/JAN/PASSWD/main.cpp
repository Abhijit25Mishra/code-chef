#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string pass;
        int t1=0,t2=0,t3=0,t4=0;
        cin>>pass;
        long long int len=pass.length();

        for(long long int i=1;i<(len-1);i++){
            if(pass[i]>='A'&&pass[i]<='Z'){t2=1;}
            if(pass[i]>='1'&&pass[i]<='9'){t3=1;}
            if(pass[i]=='@'||pass[i]=='#'||pass[i]=='$'||pass[i]=='%'||pass[i]=='?'){t4=1;}

        }
        for(long long int i=0;i<len;i++){
            if(pass[i]>='a'&&pass[i]<='z'){t1=1;}
            if(pass[i]==' '){break;}
        }
        if((t1+t2+t3+t4)==4 && len>=10){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}

    }
    return 0;
}
