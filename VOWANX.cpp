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

		string s;
		cin >> s;

		string s1 = "";
		string ans = "";

		int s1_size = 0;

		int flipped = 0;
		char c;

		for(int i = n - 1; i >= 0; i--){
			c = s[i];
			
			if(flipped){
				//add to ans
				ans += c;
			}
			else{
				//add to s1
				s1 += c;
				s1_size++;
			}

			if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
				if(flipped){
					flipped = 0;
				}
				else{
					flipped = 1;
				}
			}
		}

		// ans = s2 + rev(s1)

		for(int i = s1_size - 1; i >= 0; i--){
			ans += s1[i];
		}

		cout << ans << "\n";


	}
	return 0;
}


// Failed attempt
// char c;
// string ans = "";
// string temp;

// for(int i = 0; i < n; i++){
// 	c = s[i];
// 	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
// 		temp = "";
// 		for(int j = i - 1; j >= 0; j--){
// 			temp += ans[j];
// 		}
// 		ans = temp;

// 	}
	
// 	ans += c;
// }