#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0;
        string s;
        cin>>s;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            sum+=s[i]-'0';
        }
        int ans;
        int a=sum%9;
        int b=9-a;
        if(sum<9&&n>1)
            ans=b;
        else
            ans=min(a,b);
        cout<<ans<<endl;
    }
}
 
