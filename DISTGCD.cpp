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
		long a, b;
		cin >> a >> b;

		long diff = b - a;
		if(diff < 0) diff = 0 - diff;

		long ans = 0;

		for(int i = 1; i * i <= diff; i++){
			if(diff % i == 0){
				ans++;
			}
			if(diff % i == 0 && diff != (i * i)){
			    ans++;
			}
		}

		cout << ans << endl;
	}
	return 0;
}