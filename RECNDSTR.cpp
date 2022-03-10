#include<iostream>
#include <string>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;

		int f = 0;

		if(s.size() % 2 != 0){
			//all chars must be same
			char a = s[0];

			for(int i = 1; i < s.size(); i++){
				if(s[i] != a){
					f = 1;
					break;
				}
			}

		}
		else{
			
			char a = s[0];
			char b = s[1];

			for(int i = 2; i < s.size(); i++){
				if(i % 2 == 0 && s[i] != a){
					f = 1;
					break;
				}

				if(i % 2 != 0 && s[i] != b){
					f = 1;
					break;
				}
			}
		}

		if(f == 1){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
	return 0;
}
