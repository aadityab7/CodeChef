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
		int x, y;
		cin >> x >> y;

		if((x + 2 * y) % 2 == 0){
			if(x == 0){
				if(y % 2 == 0){
					cout << "YES" << endl;
				}
				else{
					cout << "NO" << endl;
				}
			}
			else{
				cout << "YES" << endl;
			}
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
