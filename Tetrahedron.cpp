/*Created By IMEGOR (Karan Kanojia) Date : October 2018 :: 9:14 AM :: Windows Operating System*/
#include <bits/stdc++.h>
#define MAX 10000003
#define lim 1000000007
#define ll long long 
#define SQRT 1060
#define sci(a) scanf("%d", &a)
#define scl(a) scanf("%lld", &a)
#define pfi(a) printf("%d\n", a)
#define pfl(a) printf("%lld\n", a)
#define pfcase(t) printf("Case #%d:\n",t)
#define pf(d) printf("%s\n",d)
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define vec vector<ll> 
#define smap unordered_map<ll, ll>
#define graph unordered_map<ll,unordered_map<ll,ll>>
using namespace std ;


//functions starts 
class Node{public: Node(){};};
ll fast(ll a, ll b, ll m){
	ll answer = 1; 
	while(b > 0){if(b&1){
		answer = (answer%m * a%m)%m;} 
		a = (a%m*a%m)%m; b=b>>1;
	} 
	return answer; 
}
bool compare(Node a, Node b){return false;}
bool contains(smap umap, ll key){
	if (umap.find(key) == umap.end()){return false;}
	else{return true;}
}
//functions ends



int main(){

	//File handling start 
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//File Handing ends 

	//Code starts from here
	int N; scl(N);
	ll dp[4][N+1];
	dp[0][0] = 0; dp[1][0] = 0; dp[2][0] = 0; dp[3][0] = 1;

	for(int i=1; i<=N; i++){
		for(int j=0;j<4; j++){
			dp[j][i] = ((dp[(j+1)%4][i-1]%lim)+
				(dp[(j+2)%4][i-1]%lim)+(dp[(j+3)%4][i-1]%lim))%lim;
		}
	}
	
	 pfl(dp[3][N]);
	
}