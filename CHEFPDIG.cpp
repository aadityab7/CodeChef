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
		string s;
		cin >> s;

		long n = s.size();

		int arr[10] = {};

		for(int i = 0; i < n; i++){
			arr[s[i] - 48]++;
		}
		
// 		for(int i = 0; i < 10; i++){
// 		    cout << arr[i] << ' ';
// 		}
// 		cout << endl;

		//for 6
		char c;

		if(arr[6] > 0){
			for(int i = 5; i < 10; i++){
				
				if(i == 6){
					if(arr[6] > 1){
						c = 66;
						cout << c;
					}
				}
				else if(arr[i]){
					c = 60 + i;
					cout << c;
				} 
			}
		}


		//for 7 and 8 
		for(int i = 7; i < 9; i++){

			if(arr[i] > 0)
			{
				for(int j = 0; j < 10; j++){
				
					if(j == i){
						if(arr[i] > 1){
							c = i * 10 + i;
							cout << c;
						}
					}
					else if(arr[j]){
						c = i * 10 + j;
						cout << c;
					} 

				}
			}

		}


		if(arr[9] && arr[0]){
			c = 90;
			cout << c;
		}

		cout << "\n";

	}
	return 0;
}