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

		int num;
		int f = 0, f2 = 0;
		long total = 0;
		
		for(int i = 0; i < n; i++){
			cin >> num;
			if(num == 2){
				f = 1;
			}
			else if(num == 5){
				f2 = 1;
			}

			total += num;
		}

		float avg = total / n;

		if(f == 1 || f2 == 0 || avg < 4.0){
			cout << "No" << endl;
		}
		else{
			cout << "Yes" << endl;
		}
	}
	return 0;
}