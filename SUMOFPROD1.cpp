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
		long long n;
		cin >> n;
		

		int num;
		long long curr = 0;
		long long ans = 0;

		for(long i = 0; i < n; i++){
			cin >> num;

			if(num == 0){
				//calculate the current number 

				if(curr > 0){
					ans += (curr * (curr + 1)) / 2;
				}
				
				curr = 0;
			}
			else{
				curr++;
			}
		}

		if(curr > 0){
			ans += (curr * (curr + 1)) / 2;
		}

		cout << ans << "\n";
	}
	return 0;
}