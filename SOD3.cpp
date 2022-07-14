#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		long long l , r;
		cin >> l >> r;

		long long i = l;
		long long j = r;

		while((i < r) && ((i % 3) != 0)){
			i++;
		}

		while((j > l) && ((j % 3) != 0)){
			j--;
		}

		long long diff = j - i;

		long long ans = diff / 3;
		
		if(i % 3 == 0 && j % 3 == 0){
			ans++;
		}

		cout << ans << "\n"; 
	}
	return 0;
}