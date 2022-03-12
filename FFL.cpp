#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
#define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, s;
		cin >> n >> s;

		int df[n], p[n];
		for(int i = 0; i < n; i++){
			cin >> p[i];
		}
		for(int i = 0; i < n ;i ++){
			cin >> df[i];
		}


		int mnd = INT_MAX;
		int mnf = INT_MAX;

		for(int i = 0; i < n; i++){
			if(df[i] == 1){
				//forward
				if(p[i] < mnf){
					mnf = p[i];
				}
			}
			else{
				if(p[i] < mnd) mnd = p[i];
			}
		}

		if(s+mnd+mnf <= 100){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}
	return 0;
}
