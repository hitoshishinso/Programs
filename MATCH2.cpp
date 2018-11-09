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

using namespace std; 

ll arr[MAX], brr[MAX],tree[4*MAX+1];
void init(int left, int right, int index){
	if(left == right){
		if(arr[left] == brr[left]){tree[index] = 1;}
		else{tree[index] = 0;}
	}
	else{
		int mid = (left+right)/2;
		init(left,mid,2*index); init(mid+1,right,2*index+1);
		tree[index] = tree[2*index]+tree[2*index+1];
	}
}

void update(int left, int right, int index, int ql, int qr, ll c){
	if(qr < left || ql > right){return ;}
	else if(left == right){
		if(brr[left] == c){tree[index] = 1;}
		else {tree[index] = 0;}
	}else{
		int mid = (left+right)/2;
		update(left, mid, 2*index, ql, qr, c);
		update(mid+1, right,2*index+1,ql,qr,c);
		tree[index] = tree[2*index]+tree[2*index+1];
	}
}

ll query(int left, int right, int index, int ql ,int qr){
	if(qr < left || ql > right){
		return 0; 
	}else if(ql<=left && qr>=right){
		return tree[index];
	}else{
		int mid = (left+right)/2;
		ll l = query(left, mid, 2*index,ql,qr);
		ll r = query(mid+1,right,2*index, ql,qr);
		return l+r;
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
		int N,q; sci(N);sci(q); 
	for(int i=0; i<N; i++){scl(arr[i]);}
	ll pr=0;
	for(int i=0; i<N; i++){scl(brr[i]); if(brr[i] == arr[i]){pr++;}}
		init(0,N-1,1);
	while(q--){
		int l,r; sci(l);sci(r);
		l = l ^ pr; r = r ^ pr;
		int c; sci(c); c = c ^ pr;
		//cout << l << " "<< r << " "<< c << " " << pr  << endl;
		l--; r--;
		update(0,N-1,1,l,r,c);
		
		pr = query(0,N-1,1,0,N-1);
		pfl(pr);
		
	}
	}
	
}