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

		int num;
		int z = 0, p = 0;

		for(int i = 0; i < n; i++){
			cin >> num;
			if(num == 0){
				z++;
			}
			else{
				p++;
			}
		}

		int ans = 1;
		
		if(z > p){
			ans = 0;
		}

		cout << ans << endl;
	}
	return 0;
}