#include<iostream>
#include <string>
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

		string s;
		cin >> s;

		std::vector<char> arr;
		arr.assign(n, '0');
		
		for(int i = n; i > 0; i--){
			for(int j = 0; j <= n - i; j++){
				string sub = s.substr(j, i);

				int w = n - 1;
				for(int k = sub.size(); i >= 0; i--){
					if(arr[w] == sub[k]){
						arr[w] = '0';
					}
					else{
						arr[w] = '1';
					}

					w--;
				}
			}
		}

		for(int i = 0; i < n; i++){
			cout << arr[i];
		}	

		cout << endl;
	}
	return 0;
}
