/*Created By IMEGOR (Karan Kanojia) Date : October 2018 :: 9:14 AM :: Windows Operating System*/
#include <bits/stdc++.h>
#define MAX 1111111
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
#define PI 3.14159
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
	    int N; cin >> N; int arr[N]; int buffer = 0; 
	    for(int i=0; i<N; i++){cin >> arr[i]; arr[i]+=buffer; buffer = arr[i];}
	    int temp = 0,day = 0; 
	    while(temp <= N-1){
	        temp = temp + arr[temp]; days++;
	    } 
	    cout << days << endl; 
	    
	}
	
		
}
