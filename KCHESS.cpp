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

		long x[n];
		long y[n];

		for(int i = 0; i < n; i++){
			cin >> x[i] >> y[i];
		}

		long a,b;
		cin >> a >> b;

		string ans =  "NO";
		for(int i = 0; i < n; i++){
			long long dist = pow((x[i] - a), 2) + pow((y[i] - b), 2);
            //cout << dist << ' ';
			if(dist == 5){
				ans = "YES";
				break;
			}
		}
		//cout << endl;

		cout << ans << endl;
	}
	return 0;
}