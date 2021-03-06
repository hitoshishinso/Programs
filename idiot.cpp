/*Created By Hitoshi (Karan Kanojia) Date : October 2018 :: 9:14 AM :: Windows Operating System*/
#include <bits/stdc++.h>
#define MAX 222222
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


ll tree[4*MAX+1];
ll arr[MAX][MAX];
void update(int left, int right, int index, int ql, int qr){
   if(ql > right || qr < left ){return;}
   else if(left == right){tree[index] += 1; return;}
   else{
      int mid = (left+right)/2;
      update(left,mid,2*index,ql,qr);
      update(mid+1,right,2*index+1,ql,qr);
      tree[index] = tree[2*index]+tree[2*index+1];
      return;
   }
}

ll query(int left, int right, int index, int ql, int qr){
   if(ql > right || qr < left){return 0;}
   else if(ql <= left && qr >= right){return tree[index];}
   else{
      int mid = (left+right)/2;
      return query(left,mid,2*index,ql,qr)+query(mid+1,right,2*index+1,ql,qr);
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
	int t; sci(t);
	while(t--){
	   int N; sci(N); ll answer = 0; 
	   for(int i=0; i<N; i++){
	      ll curr; scl(curr); 
	      answer+= query(0,MAX-1, 1, curr+1, MAX-1);
	      update(0,MAX-1,1,curr,curr);
	   }
	   pfl(answer);
	}
		
}





