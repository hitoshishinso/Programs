#include <bits/stdc++.h>
#define MAX 1111111
#define lim 1e9+7
#define ll long long 
#define SQRT 1060
#define sci(a) scanf("%d", &a)
#define scl(a) scanf("%lld", &a)
#define pfi(a) printf("%d\n", a)
#define pfl(a) printf("%lld\n", a)
#define pfcase(t) printf("Case #%d:\n",t);
#define pf(d) printf("%s\n",d);
#define sgraph unordered_map<ll , unorderd_map<ll, ll>>
#define sumap unordered_map<ll, ll> 


using namespace std ;

class graph{
	public : 
	unordered_map<ll , unordered_map <ll , ll >> g ; 
	init(int N) {
		for(int i=0; i<)
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

	ll service_time = 10, products = 100, arrival_init = 0;
	ll arrival_rate = 7; bool isAvialable = true; ll curr_p =0 ; 
	ll time  = 0; 
	bool arrived[111]; memset(arrived, false,111*sizeof(arrived[0]));
	bool process[111]; memset(process, false,111*sizeof(arrived[0])); 
	ll arr[111][2];
	while(products--){
		if(time%7 == 0){
			curr_p++; 
			arr[curr_p][0] = time; 
			arrived[curr_p]= true;
		}


		time++; 
	}


}