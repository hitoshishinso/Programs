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

ll normalise(string x, int c){
	ll mul = 1; int index = x.length()-1; 
	ll answer = 0;
	for(int i=index; i>=0; i--){
		answer+= mul*((int)x[index]-48);
		mul = (mul%c * 3%c)%c;
	}
	return answer;
}

ll fast(ll a, ll b, ll c){
	if(b == 0){return 1%c;}
	else if(b == 1){return a%c;}
	else{
		ll par = fast(a,b/2,c)%c; par = ((par%c)*(par%c))%c;
		if(b%2 == 0){return par;}
		else{return ((a%c)*(par%c))%c;}
	}
}

int main(){

	//File handling start 
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//File Handing ends 

	//Code starts from here
	ll a,c; string b; scl(a);cin >> b; scl(c);
	cout << a << " " << b << " " << c << endl;
	ll po = normalise(b,c);
	pfl(po);
	cout << fast(a, po, c) << endl;
	

}