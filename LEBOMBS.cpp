#include<iostream>
// #include <bits/stdc++.h>;
#include <string>
#include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		string s;
		cin >> s;

		vector <int> ans;
		ans.assign(n, 0);

		for(int i = 0; i < n; i++){
			if(s[i] == '1'){
				ans[i] = 1;
				if(i > 0){
					ans[i - 1] = 1;
				}
				if(i < n - 1){
					ans[i + 1] = 1;
				}
			}
		}

		int fin = 0;
		for(int i = 0; i < n; i++){
			if(ans[i] == 0) fin++;
		}

		cout << fin << endl;
	}
	return 0;
}