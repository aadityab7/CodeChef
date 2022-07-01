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
		int l, r;
		cin >> l >> r;

		if((r) >= 2 * l){

			cout << -1 << endl;

			/*
			if(l == 1){
				cout << -1 << endl;
			}
			else{
				int prime_not_found = 1;
				long long num;

				if(r % 2 == 0){
					num = r + 1;
				}
				else{
					num = r;
				}

				while(prime_not_found){

					int found = 1;

					for(int i = 3; i * i < num; i+= 2){
						if(num % i == 0){
							found = 0;
							break;
						}
					}

					if(found){
						prime_not_found = 0;
						cout << num << endl;
						break;
					}

					num += 2;
				}
			}
						
			*/
		}
		else{
			cout << r << endl;
		}
	}
	return 0;
}