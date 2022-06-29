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

		int f;
		cin >> f;
		
		int flag = 0;

		string ans = "YES";

		int num;
		for(int i = 1; i < n; i++){
			cin >> num;
			if(num == 1){
				//switch flag
				if(flag == 0){
					flag = 1;
				}
				else{
					flag = 0;
				}
			}
		}

		if(f == 0){
			if(flag != 0){
				ans = "NO";
			}
		}
		else{
			if(flag == 0){
				ans = "NO";
			}
		}

		cout << ans << endl;
	}
	return 0;
}