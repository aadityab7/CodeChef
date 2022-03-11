#include<iostream>
#include <string>
//#include <vector>
//max val of long 9223372036854775807
//max val of int 147483647
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;

		char f = s[0];
		char l = s[s.size() - 1];

		long mx = -1;
		long i = 0;

		while(i < s.size() - 1){
			long curr = 0;
			long j = i + 1;
			int flag = 0;

			while(j < s.size() - 1 && s[j] != f && s[j] != l){
				curr++;
				flag = 1;
				j++;
			}

			if(flag == 1 && curr > mx){
				mx = curr;
			}

			i = j;
		}

		cout << mx << endl;
	}
	return 0;
}
