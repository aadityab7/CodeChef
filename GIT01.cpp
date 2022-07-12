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
		int n;
		cin >> n;
		int m;
		cin >> m;

		long total_cost = 0, total1 = 0, total2 = 0;
		int curr, flag = 1;
		int prev_flag;
		string s;

		for(int i = 0; i < n; i++){
			cin >> s;
			prev_flag = flag;

			for(int j = 0; j < m; j++){
				//red = 1 & green = 0
				if(s[j] == 'R'){
					curr = 1;
				}
				else{
					curr = 0;
				}

				//compare flag and current color
				if(flag){
					if(curr){
						total2 += 5;
					}
					else{
						total1 += 3;
					}
				}
				else{
					if(curr){
						total1 += 5;
					}
					else{
						total2 += 3;
					}
				}

				//update flag after each color
				if(flag){
					flag = 0;
				}
				else{
					flag = 1;
				}
			}

			if(prev_flag){
				flag = 0;
			}
			else{
				flag = 1;
			}
		}

		total_cost = total1;

		if(total1 > total2){
			total_cost = total2;
		}

		cout << total_cost << "\n";

	}
	return 0;
}