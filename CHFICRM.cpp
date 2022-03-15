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
		int n;
		cin >> n;

		int x = 0, y = 0, z = 0;
		int f = 0;
		int num;

		for(int i = 0; i < n; i++){
			cin >> num;
			if(num == 5) x++;
			else if(num == 10){
				if(x > 0) x--;
				else f = 1;
				y++;
			}
			else{
				if(y > 0) {
					y--;
				}else if(x > 1){
					x = x - 2;
				}
				else{
					f = 1;
				}
				z++;
			}
		}

		if(f){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
	return 0;
}