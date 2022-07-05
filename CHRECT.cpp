#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		int m, k;
		cin >> m >> k;

		int ans = ceil(k / 2.0);
        
        if(n == 1 || m == 1){
            ans = k;
        }
        
		int dist = (n - 1) + (m - 1);

		if(dist < 2){
			ans = 0;
		}

		cout << ans << endl;
	}
	return 0;
}