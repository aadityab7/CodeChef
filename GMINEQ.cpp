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

		for(int i = 0; i < n; i++){
			cin >> num;
			if(num == 1){
				ps++;
			}
			else{
				ns++;
			}
		}

		string ans = "Yes";

		if (ps == n || ns == n){
			ans = "No";
		}
		else{
			float ratio = ps / ns;
			if(ratio > 3.0 || ratio < 0.5){
				ans = "No";
			}
		}

		cout << ans << endl;
	}
	return 0;
}