#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, m;
	cin >> n >> m;

	long long upper = (3 * n) + 1;
	long long lower = n + 1;
	long long q;

	for(int i = 0; i < m; i++){
		cin >> q;

		if(q < (n + 2)){
			cout << 0 << "\n";
		}
		else if(q > ((2 * n) + 1)){
			cout << upper - q << "\n";
		}
		else{
			cout << q - lower << "\n";
		}
	}
	return 0;
}