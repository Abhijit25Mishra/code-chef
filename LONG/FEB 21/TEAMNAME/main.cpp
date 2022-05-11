/* #include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a[n];
        char b[n];
        for(int i=0;i<n;i++){
            cin>>b[i]>>a[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int k=1,l=1;
        for(int i=0;i<n;i++){
            if(a[i]!=a[i+1]&& i<=n-2){k++;}

        }
        for(int i=0;i<n;i++){
             if(b[i]!=b[i+1]&& i<=n-2){l++;}
        }
        cout<<(l*k)-n<<endl;
    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

 long long max_teamname(string str[], int n)
{
    sort(str, str+n);
    string a, b;
    long long count = 0;

    for(long long i=0; i< n;i++){
        for(long long j=i+1;j<n;j++){
            a=str[i];
            b=str[j];
            swap(a[0], b[0]);
            if(a[0]==b[0]){}
            else if(a==b){}
            else if(!binary_search(str, str+n, a) && !binary_search(str, str+n, b))count+= 2;
        }
    }
    return count;
}

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
        string str[n];
        for(long long i = 0; i< n; i++){
            cin>>str[i];
        }
        long long ans=max_teamname(str, n);
        cout<<ans<<endl;
	}
	return 0;
}

