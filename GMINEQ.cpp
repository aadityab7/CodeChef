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
        int num;
        int ps = 0, ns = 0;
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

		int diff = ps - ns;
		if(diff < 0) diff = 0 - diff;

		if(n % 4 == 0){
			if(diff != 0){
				ans = "No";
			}
		}
		else if(n % 4 == 1 || n % 4 == 3){
			if(diff != 1){
				ans = "No";
			}
		}
		else{
			if(diff != 2 && diff != 0){
				ans = "No";
			}
		}

		cout << ans << endl;
	}
	return 0;
}