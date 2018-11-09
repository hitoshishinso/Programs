/*Created By IMEGOR (Karan Kanojia)*/
#include <bits/stdc++.h>
#define MAX 1111111
#define lim 1e9+7
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

using namespace std ;


int main(){

	//File handling start 
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//File Handing ends 

	//Code starts from here
	int t; sci(t); 
	while(t--){
		ll a,b,c; scl(a); scl(b); scl(c);
		if(((a+b)/2)%c == 0){pf("CHEF");}
		else{pf("COOK");}
	}
	
}