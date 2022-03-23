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
		long n;
		cin >> n;

		long num = n;

		long count =  0;

		while(num != 0){
			count++;
			num = num / 2;
		}


		count--;
		
		long ans = n - pow(2, count);
		

		for(int i = 1; i < count; i++){
			ans += pow(2, i) - 1;
		}

		cout << ans << endl;
	}
	return 0;
}