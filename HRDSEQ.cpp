#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
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

		vector <int> arr;
		arr.assign(128, 0);

		vector<int> ans;
		ans.assign(n, 0);

		for(int i = 0; i < n - 1; i++){
			if(arr[ans[i]] == 0){
				ans[i + 1] = 0;
			}
			else{
				ans[i + 1] = i - arr[ans[i]] + 1;
			}

			arr[ans[i]] = i + 1;
		}

		int num = ans[n - 1];
		int fin = 0;

		for(int i = 0; i < n; i++){
			if(ans[i] == num) fin++;
		}
        
		cout << fin << endl;
	}
	return 0;
}