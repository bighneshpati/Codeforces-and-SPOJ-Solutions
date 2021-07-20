#include <iostream>
#include <unordered_map>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
ll gcd_(ll a, ll b){
	if(b==0)
		return a;
	return gcd_(b,a%b);
}
 
ll SPF[15000001];
 
void getPrimes(){
 
	memset(SPF,-1,sizeof(SPF));
	ll num=15000001;
 
	for(ll i=2;(i*i)<=num;i++){
		if(SPF[i]==-1){
			SPF[i]=i;
			for(ll j=i;(i*j)<=num;j++){
				if(SPF[(i*j)]==-1){
					SPF[(i*j)]=i;
				}
			}
		}
	}
 
	// vector<ll> primes;
	// for(ll i=2;i<=num;i++)
	// {
	// 	if(sieve[i])
	// 		primes.push_back(i);
	// }
	// return primes;
 
}
 
 
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 
	getPrimes();
 
	ll n;
	cin>>n;
 
 
	ll arr[n];
	ll maxi=1;
	for(ll i=0;i<n;i++){
		scanf( "%lld",&arr[i]);
		maxi=max(maxi,arr[i]);
	}
 
	if(maxi==1)
	{
		printf("-1\n");
		return 0;
	}
 
 
	ll gcd=gcd_(arr[0],arr[1]);
 
	for(ll i=2;i<n;i++){
		gcd=gcd_(gcd,arr[i]);
	}
 
	for(ll i=0;i<n;i++){
		arr[i]/=gcd;
	}
 
	//ll maxCount=0;
 
	unordered_map<ll,ll> freq;
	for(ll i=0;i<n;i++){
		if(arr[i]==1)
			continue;
		while(arr[i]!=1){
			ll p=SPF[arr[i]];
			freq[p]++;
			while(p==SPF[arr[i]] && arr[i]!=1){
				arr[i]/=SPF[arr[i]];
			}
		}
	}
	ll maxCount=1;
	for(auto i:freq){
		maxCount=max(maxCount,i.second);
	}
 
 
	printf("%lld",n-maxCount);
 
}