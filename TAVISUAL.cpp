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
		int n, c, q;
		cin >> n >> c >> q;

		int l, r;
		int num;
		for(int i = 0; i < q; i++){
			cin >> l >> r;
			if(c >= l && c <= r){
				num = c - l;
				c = r - num;
			}
		}

		cout << c << endl;
	}
	return 0;
}