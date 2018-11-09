/*Created By IMEGOR (Karan Kanojia) Date : October 2018 :: 9:14 AM :: Windows Operating System*/
#include <bits/stdc++.h>
#define MAX 11111
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


ll tree[4*MAX+1], arr[MAX]; 

void init(int left,int right, int index){
   if(left == right){tree[left] = arr[index];}
}


int main(){

	//File handling start 
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//File Handing ends n

	//Code starts from here
	int N; cin >> N; ll arr[N], brr[N], rank[N];
	for(int i=0; i<N; i++){cin >> arr[i];}
	for(int i=0; i<N; i++){cin >> brr[i];}
	bool flag = false; 
	for(int i=0; i<N; i++){rank[i] = N-arr[i]-brr[i];}
	
	
			
}




