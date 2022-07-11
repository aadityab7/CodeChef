#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		long k;
		cin >> k;

		long points[k];

		for(int i = 0; i < k; i++){
			cin >> points[i];
		}

		string s;
		long long points_scored = 0;

		for(int i = 0; i < n; i++){
			cin >> s;

			points_scored = 0;

			for(int j = 0; j < k; j++){
				if(s[j] == '1'){
					points_scored += points[j];
				}
			}

			cout << points_scored << "\n";
		}
	}
	return 0;
}