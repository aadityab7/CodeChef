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
		long long n1, n2, m;
        cin >> n1 >> n2 >> m;
        
		long long max = m * (m + 1);
		max = max / 2;
		//I can remove upto m * (m + 1) / 2 rocks but if someone has less than that 
		//then that becomes the limit

		if(n1 < max || n2 < max){
			if(n1 < n2){
				max = n1;
			}
			else{
				max = n2;
			}
		}

		long long ans = (n1 - max) + (n2 - max);
		cout << ans << "\n";
	}
	return 0;
}