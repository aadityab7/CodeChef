#include<iostream>
//#include <string>
//#include <vector>
//max val of long 9223372036854775807 ;
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;

		long x = 0, y = 0;

		for(long i = 0; i < s.size(); i++){
			if(s[i] == '1'){
				x++;
			}
			else {
				y++;
			}
		}

		if(x == s.size() - 1 && y == 1){
			cout << "Yes" << endl;
		}
		else if(y == s.size() - 1 && x == 1){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}
