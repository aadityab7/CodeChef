#include<iostream>
//#include <string>
#include <vector>
//max val of long 9223372036854775807
//max val of int 147483647
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		std::vector<int> arr;
		arr.assign(26,0);

		string s;
		for(int i = 0; i < n; i++){
			cin >> s;
			for(int i = 0; i < s.size(); i++){
				arr[s[i] - 97]++;
			}
		}

		int mn = 147483647;

		if((arr['c' - 97]) / 2 < mn) mn = (arr['c' - 97]) / 2;
		if((arr['e' - 97]) / 2 < mn) mn = (arr['e' - 97]) / 2;
		if(arr['o' - 97] < mn) mn = arr['o' - 97];
		if(arr['d' - 97] < mn) mn = arr['d' - 97];
		if(arr['h' - 97] < mn) mn = arr['h' - 97];
		if(arr['f' - 97] < mn) mn = arr['f' - 97];

		cout << mn << endl;

	}
	return 0;
}
