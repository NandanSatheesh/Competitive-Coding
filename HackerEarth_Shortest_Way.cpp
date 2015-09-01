/*~~~~~~~~~~~~~~~~~~*
*                  *
* $Dollar Akshay$  *
*                  *
*~~~~~~~~~~~~~~~~~~*/

//https://www.hackerearth.com/september-easy-15/algorithm/shortest-way/

#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define pii pair<int,int>
#define MOD 1000000007

int main() {

	int t;
	scanf("%d", &t);
	REP(tc, t) {
		pair<ll int, ll int> p;
		ll int op = 0;
		scanf("%lld %lld", &p.first, &p.second);
		while (p.first!=1 && p.second!=1) {
			if (p.first>p.second) {
				op += p.first/p.second;
				p.first %= p.second;
			}
			else {
				op += p.second/p.first;
				p.second %= p.first;
			}
		}
		if (p.first>1)
			op += p.first-1;
		if (p.second>1)
			op += p.second-1;
		printf("%lld\n", op);
	}
	return 0;
}

//Solved