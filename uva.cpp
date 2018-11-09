/*Created By IMEGOR (Karan Kanojia) Date : October 2018 :: 9:14 AM :: Windows Operating System*/
#include <bits/stdc++.h>
#define MAX 100000001
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

bitset<MAX> prime;

void sieve(){
    prime.flip();
    prime[1] = 0; prime[2] = 1;
    for(int i=3; i*i<= MAX; i+=2){
       for(int j=i*i; j<MAX && prime[i]; j=j+i){
          prime[j] = 0;
       }
    }
    
    
    
    for(int i=3; i<MAX; i+=2){
       if(prime[i] == 1){
         pfi(i);
       }
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
	sieve();	
	
}



