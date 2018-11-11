/*Created By IMEGOR (Karan Kanojia) Date : October 2018 :: 9:14 AM :: Windows Operating System*/
#include <bits/stdc++.h>
#define MAX 11111
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
#define vec vector<ll> ls
#define smap unordered_map <int,int> 
#define N 1000000

using namespace std ;

ll dp[N];

int main(){


	//File handling start 
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//File Handing ends 
    //Code starts from here
    dp[0] = 2; dp[1] = 8; ll answer = 10; 
    for(int i=2; i<N; i++){
    	dp[i] = 4*dp[i-1]+dp[i-2];if(dp[i] > 4*N){break;}answer+= dp[i];
    }
    pfl(answer);
}

