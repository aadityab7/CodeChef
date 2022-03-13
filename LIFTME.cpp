#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long x , n;
		cin >> x >> n;
        
        long num, numb;
		long ans = 0;
		int prev = 0;
		
		for(int i = 0; i < n * 2; i++){
			cin >> num;
			numb = num - prev;
			if(numb < 0) numb = -numb;
			ans += numb;
			prev = num;
		}

		cout << ans << endl;
	}
	return 0;
}
