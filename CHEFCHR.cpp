#include<iostream>
// #include <bits/stdc++.h>;
#include <string>
#include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	long t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;

		long ans = 0;

		std::vector<int> arr;

        if(s.size() >= 4){
	        for(int i = 0; i < s.size() - 3; i++){

				arr.assign(8, 0);

				for(int j = 0; j < 4; j++){
				    
					if(s[i + j] == 'c' || s[i + j] == 'h' || s[i + j] == 'e' || s[i + j] == 'f'){
						arr[s[i + j] - 97]++;
					}else{
						break;
					}
				}

				if(arr[2] && arr[7] && arr[4] && arr[5]){
					ans++;
				} 
				
			}
        }
		
    
        if(ans == 0) cout << "normal" << endl;
		else cout << "lovely " << ans << endl;
	}
	return 0;
}