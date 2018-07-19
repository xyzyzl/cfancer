//============================================================================
// Name        : Antimatter
// Author      : Albert Ye
// Version     : 1
// Copyright   : what is a copyright
// Description : Have a great classroom!
//============================================================================

#include <bits/stdc++.h>

#define MAXN 1010
#define MOD 1000000007

using namespace std;

int N, S;
#define ZERO (S-1)/2
int a[MAXN];
int dp[MAXN][2*MAXN*10+2];
int main() {
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> a[i];
		S += a[i];
	}
	S *= 2;
	S++;
	for(int i = 0; i <= N; i++) {
		dp[i][ZERO]++;
	}
	int sm = 0;
	for(int i = 1; i <= N; i++) {
		for(int j = 0; j < S; j++) {
			if(j-a[i-1] >= 0 && i > 0) {
				dp[i][j] += dp[i-1][j-a[i-1]];
				dp[i][j] %= MOD;
			}
			if(j+a[i-1] < S && i > 0) {
				dp[i][j] += dp[i-1][j+a[i-1]];
				dp[i][j] %= MOD;
			}
			// cout << dp[i][j] << " ";
		}
		// cout << endl;
		sm += dp[i][ZERO];
		sm %= MOD;
	}
	sm -= N;
	sm = (sm + MOD) % MOD;
	cout << sm << endl;
}
