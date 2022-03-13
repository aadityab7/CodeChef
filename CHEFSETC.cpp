#include<iostream>
// #include <bits/stdc++.h>;
// #include <string>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long a[4];
		int f = 0;
		long long total = 0;
		for(int i = 0; i < 4; i++){
			cin >> a[i];
			total += a[i];
		}

		if(total == 0){
			f = 1;
		}
		else{
			for(int i = 0; i < 4; i++){
				if(a[i] == 0 || total - a[i] == 0){
					f = 1;
					break;
				}
			}

			if(f == 0){
				for(int i = 0; i < 3; i++){
					for(int j = i + 1; j < 4; j++){
						if(a[i] + a[j] == 0){
							f = 1;
							break;
						}
					}
				}
			}
		}

		if(f){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}
