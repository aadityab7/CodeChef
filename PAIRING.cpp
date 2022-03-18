#include<iostream>
#include <bits/stdc++.h>
#include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;

		int arr[n] = {};
		int p[m][2];
		for(int i = 0; i < m; i++){
			cin >> p[i][0];
			cin >> p[i][1];
		}

		std::vector<int> ans;
		for(int i = m - 1; i >= 0; i--){
			if(arr[p[i][0]] == 0 && arr[p[i][1]] == 0){
				ans.push_back(i);
				arr[p[i][0]] = 1;
				arr[p[i][1]] = 1;
			}
		}

		sort(ans.begin(), ans.end());

		for(int i = 0; i < ans.size(); i++){
			cout << ans[i] << ' ';
		}

		cout << endl;
	}
	return 0;
}