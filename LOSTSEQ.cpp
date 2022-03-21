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

		int num, ev = 0;
		for(int i = 0; i < 2 * n; i++){
			cin >> num;
			if(num % 2 == 0){
				ev++;
			}
		}

		if(ev % 2 == 0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}