#include <bits/stdc++.h>
#define MAX 1111111
#define lim 1e9+7
#define ll long long 
#define SQRT 1060
#define sci(a) scanf("%d", &a)
#define scl(a) scanf("%lld", &a)
#define pfi(a) printf("%d\n", a)
#define pfl(a) printf("%lld\n", a)
#define kun -8e8
using namespace std; 

class Node{
public: 
ll pre, suff, best, total; 
Node(){}
Node(ll pre,ll suff,ll best,ll total){
	this->pre = pre; this->suff=suff; 
	this->best=best; this->total=total;}
void print(){
	cout << this->pre << " " << this->suff << " " << this->best 
	<< " " << this->total << endl;
} 
};

ll arr[MAX]; Node tree[4*MAX+1];



void init(int left, int right, int index){
	if(left == right){
		ll base = arr[left];
		tree[index] = Node(base,base,base,base);
	}else{
		int mid = (left+right)/2;
		init(left,mid,2*index);init(mid+1,right,2*index+1);
		Node l = tree[2*index], r = tree[2*index+1];
		ll pre = max(l.pre, l.total+r.pre);
		ll suff = max(r.suff, r.total+l.suff);
		ll total = r.total+l.total;
		ll best = max(l.best, r.best);
		best = max(best, l.suff+r.pre);
		tree[index] = Node(pre,suff,best,total);
	}
}

Node query(int left, int right, int index,int ql, int qr){
	if(ql <= left && qr >= right){return tree[index];}
	else if(ql>right || qr<left){
		return Node(kun,kun,kun,0);
	}else{
		int mid = (left+right)/2;
		Node l = query(left,mid,2*index,ql,qr), r = query(mid+1,right,2*index+1,ql,qr);
		ll pre = max(l.pre, l.total + r.pre);
		ll suff = max(r.suff, r.total+l.suff);
		ll total = r.total+l.total;
		ll best = max(l.best, r.best);
		best = max(best, l.suff+r.pre);
		Node answer = Node(pre,suff,best,total);
		return answer;
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
	int N; sci(N); for(int i=0 ;i<N; i++){scl(arr[i]);}
	int q; sci(q); init(0,N-1,1);
	while(q--){
		int x1,y1,x2,y2; sci(x1);sci(y1);sci(x2);sci(y2);
		x1--;y1--;x2--;y2--;
		if(x2 < y1){
			
		}
	}
	
}