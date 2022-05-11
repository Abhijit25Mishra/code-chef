#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        int a=0;
        cin>>s;
        cout<<s.size()<<endl<<endl;
        for(int i=0;i<s.size();i++){
                int k=-1;
            for(int j=i;j<s.size();i++){
                if((s[i].compare(s[j]))
                   !=0)

                    {k++;cout<<k<<endl;}
                if(j==(s.size()-1)){a+=((k+1)/2);}
            }
        }
        cout<<a<<endl;
    }
    return 0;
}
