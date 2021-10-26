#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#define ll long long 
#define all(x) (x).begin(),(x).end()
#define vll vector<ll>
#define vi vector<ll>
#define vp vector<pi>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define POB pop_back 
#define f(i,x,z) for(ll i=x;i<z;i++)
#define debug(x) cout<<'DEBUG------> '<<x<<endl
#define srt(v) sort(v.begin(), v.end())
#define clr(x) memset(x, 0, sizeof(x)) 
#define setall(x,a) memset(x, a, sizeof(x))
#define INF 1000000000000000003 
#define mathpi 3.141592653589793238 
#define F first;
#define S second;
#define vpair vector<pair<ll,ll>>
#define vpairs vector<pair<string,string>>
#define tin tuple<ll,ll,ll>
#define rev(i,x,z) for(ll i=x;i>=z;i--)    
vector<vi>adj(10000);
vector<bool>visited(10000,0);
stack<ll>s;
void dfs(int cur)
{
	// cout<<cur;
	visited[cur]=1;
	for(auto x:adj[cur])
	{
		if(visited[x]!=1)
		{
			dfs(x);
		}
	}
	s.push(cur);	
}
int main()
{
	// freopen("inp.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	ios::sync_with_stdio(0);// Input and output clearance
	cin.tie(0);
	ll n;
	cin>>n;
	ll u,v;
	f(i,1,n+1)
	{
		cin>>u>>v;
		adj[u].pb(v);
	}
	f(i,1,n)
	{
		if(visited[i]!=1)
		{
			dfs(i);
		}
	}
	while (!s.empty()) 
	{
        cout << ' ' << s.top();
        s.pop();
	}
}
