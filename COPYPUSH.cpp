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
		
		string s;
		cin >> s;

		string ans = "YES";

		long size = n;

		while(size > 0){
			if(size % 2 == 0){
				//first and second half must be equal
				long half_size = size / 2;
				
				//from 0 to < size / 2 and from size / 2
				//if not equal break
				for(long i = 0; i < half_size; i++){
					if(s[i] != s[half_size + i]){
						ans = "NO";
						break;
					}
				}

				size = size / 2;
			}
			else{
				size--;
			}
		}

		cout << ans << "\n";

	}
	return 0;
}