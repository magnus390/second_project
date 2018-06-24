#include <bits/stdc++.h>
 
#define sync_off std::ios_base::sync_with_stdio(false); cin.tie(NULL);
#define lli long long int
#define hashmap unordered_map
#define hashset unordered_set
 
#define all(v) v.begin(),v.end()
#define contains(x,a) (x).find(a)!=(x).end()
#define pb push_back
 
#define pii pair<int,int>
#define mp make_pair
#define F first
#define S second
 
#define si(n)	 scanf("%d",&n)
#define sii(n,m) scanf("%d%d",&n,&m)
#define slli(n)  scanf("%lld",&n)
#define forn(i,a,b) for(int i=a;i<b;i++)
 
const int mod = 10000009;
const lli MOD = 1000000007;
const int INF = INT_MAX;
int DEBUG = 0;
 int a[1000000];
using namespace std;
 
int findMinK(int maxi,int n,int H){
	int l = 1;
	int r = maxi;
	int ans = INF;
 
	while(l<r){
		int k = (l+r)>>1;
		lli cnt = 0;
		forn(i,0,n)
			cnt += (lli)ceil((double)a[i]/k);
 
		if(cnt <= H){
			r = k;
			ans = min(ans,k);
		}
		else
			l = k+1;
	}
	ans = min(ans,r);
 
	return ans;
}
 
int main()
{
	int t;
	si(t);
	while(t--){
		int n,H,maxi = INT_MIN;
		sii(n,H);
 
		
		for(int i=0;i<n;i++)
		{
			 cin>>a[i];
			 maxi = max(maxi,a[i]);	
		}
 
		int ans = findMinK(maxi,n,H);
		printf("%d\n", ans);
	}
 
    return 0;
}
