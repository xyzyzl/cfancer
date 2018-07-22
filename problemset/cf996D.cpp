//============================================================================
// Name        : Suit and Tie
// Author      : Albert Ye
// Version     : 1
// Copyright   : what is a copyright
// Description : tensk you dark passage & delfino plaza
//============================================================================

#include <bits/stdc++.h>

#define MAXN 101

using namespace std;
int N, sum;
int arr[2*MAXN];
bool vis[MAXN];

int main() {
	cin >> N;
	for(int i = 0; i < 2*N; i++)
		cin >> arr[i];
	for(int i = 0; i < 2*N; i++) {
		if(vis[arr[i]])
			continue;
		for(int j = i+1; j < 2*N; j++) {
			if(arr[i] == arr[j]) {
				vis[arr[i]] = true;
				for(int k = j; k >= i+2; k--)
					arr[k] = arr[k-1];
				arr[i+1] = arr[i];
				sum += j-i-1;
			}
		}
	}
	cout << sum << endl;
}
