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
		int n , x ,y;
		cin >> n >> x >> y;

		int a[n], b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		} 

		for(int i =0; i < n; i++){
			cin >> b[i];
		}

		int f = 0;
		for(int i= 0; i < n ; i ++){
			int num = b[i] - a[i];

			if(num != x && num != y){
				f = 1;
				break;
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