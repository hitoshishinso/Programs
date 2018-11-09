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
using namespace std ;


ll tree[MAX]; 
class point{
public:
	ll x,y; point(){}
	point(ll x, ll y){this->x = x; this->y;}
};
class circle{
public:
	point center;  ll radius; 
	circle(){} 
	circle(ll x, ll y, ll r){
		this->center.x = x; this->center.y=y; this->radius=r;
	}
};


double dis(point a, point b){
	double answer = (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y);
	answer = pow(answer, 0.5);

	return answer;
}

void update(circle i, circle j){
	ll tempx = i.center.x, tempy = i.center.y; 
	i.center.x -=tempx; i.center.y-=tempy;
	j.center.x -=tempx; j.center.y-=tempy;

	double centerdis = dis(i.center, j.center);
	double raddis = (double) (i.radius+j.radius);
	int low,high;
	if(centerdis == raddis){
	   low = 0; high = (int)(2*raddis);	
	}else if(centerdis > raddis){
		low = (int)(centerdis-raddis); high = (int)(centerdis+raddis);
	}else{
		low = 0; high = (int)(centerdis+raddis);
	}
	tree[low] += 1; tree[high+1] += -1; 
}


int main(){

	//File handling start 
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//File Handing ends 

	//Code starts from here
	int N,q; sci(N); sci(q); 
	circle arr[N];
	for(int i=0;i<N; i++){
		ll x,y,r; cin >> x >> y >> r;
		arr[i] = circle(x,y , r);
	}

	for(int i=0; i<N; i++){
		for(int j=i+1; j<N; j++){
			update(arr[i],arr[j]);
		}
	}
	ll buffer= 0; 
	for(int i=0; i<MAX; i++){
		tree[i] = tree[i]+buffer;
		buffer = tree[i];
	}

	while(q--){
		int curr; sci(curr);
		//cout << curr << " " << tree[curr] << endl;
		pfl(tree[curr]);
	}


	
}
