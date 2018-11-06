/*Created By HitoshiShinso (Karan Kanojia) Date : October 2018 :: 9:14 AM :: Windows Operating System*/
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
#define N 80
using namespace std ;

ll arr[N][N];
unordered_map<string, ll> dp; 
void init(){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
           cin >> arr[i][j];
        }
    }
}

ll solve(int x, int y){
	if(dp.find(to_string(x)+" "+to_string(y)) != dp.end()){return dp[to_string(x)+" "+to_string(y)];}
	else if(x == N || y == N){return INT_MAX;} 
	else if(x == N-1 && y == N-1){return arr[x][y];}
	else{
		ll answer = arr[x][y]+solve(x+1,y);
		answer = min(answer, arr[x][y]+solve(x,y+1));
		dp[to_string(x)+" "+to_string(y)] = answer;
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
	init();
    cout << solve(0,0) << endl;
}
