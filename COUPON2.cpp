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
		int d , c;
		cin >> d >> c;

		int a[3], b[3];
		for(int i = 0; i < 3; i++){
			cin >> a[i];
		}
		for(int i = 0; i < 3; i++){
			cin >> b[i];
		}

		int sum1 = 0, sum2 = 0;

		for(int i = 0; i < 3; i++){
			sum1 += a[i];
			sum2 += b[i];
		}

		int dc = 0;

		if(sum1 >= 150) dc++;
		if(sum2 >= 150)	dc++;

		if((dc * d) > c){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}

	}
	return 0;
}
