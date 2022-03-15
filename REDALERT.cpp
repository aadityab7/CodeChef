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
		int n, d, h;
		cin >> n >> d >> h;

        int f = 0;
		int rain = 0;
		int num;
		for(int i = 0; i < n; i++){
			cin >> num;

			if(num > 0){
				rain += num;
			}
			else{
				if(rain > d){
					rain = rain - d;
				}
				else{
					rain = 0;
				}
			}

			if(rain > h){
				f = 1;
			}
		}

		if(f){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}