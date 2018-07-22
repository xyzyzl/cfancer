//============================================================================
// Name        : Theatre Square
// Author      : idk
// Version     : 1
// Copyright   : none
// Description : desperatecito i need to finished a cf problemito
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

double n, m, a;
int main() {
	// welp forgot to double things
	cin >> n >> m >> a;
	long long s1 = ceil(n/a);
	long long s2 = ceil(m/a);
	cout << s1 * s2 << endl;
}
