#include<iostream>
// #include <bits/stdc++.h>;
#include <string>
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

		string s;
		cin >> s;
        
        string ans = "";
        
		for(int i = 0; i < n / 2; i++){
			if(s[i] > s[n - 1 - i]){
				ans += s[n - 1 - i];
			}
			else{
			    ans += s[i];
			}
		}
		
		for(int i = (n / 2); i < n; i++){
		    if(s[i] > s[n - 1 - i]){
		        ans += s[i];
		    }
		    else{
		        ans += s[n - 1 -i];
		    }
		}
            
        
		int f = 0;
		for(int i = 0; i < n - 1; i++){
			if(ans[i] > ans[i + 1]){
				f = 1;
				break;
			}
		}

		if(f){
			cout <<"NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
	return 0;
}