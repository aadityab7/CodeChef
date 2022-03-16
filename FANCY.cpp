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
		string s;
	    getline(cin, s);
  
        // Keep reading a new line while there is
        // a blank line
        while (s.length() == 0)
            getline(cin, s);
  
		int f = 0;
		for(int i = 0; i < s.size() - 2; i++){
			if(s[i] == 'n'){
				if(i == 0 || s[i - 1] == ' '){
					if(i + 3 == s.size() || s[i + 3] == ' '){
						if(s[i + 2] == 't'){
							if(s[i + 1] == 'o'){
							    f = 1;
								break; 
							}	
						}
					}
				}
			}
		}

		if(f){
			cout << "Real Fancy" << endl;
		}
		else{
			cout << "regularly fancy" << endl;
		}
	}
	return 0;
}