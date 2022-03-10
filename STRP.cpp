#include<iostream>
#include<string>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		string s;
		cin >> s;

		int i = 0;
		int count  = 0;
		while(i < n){
			count ++;
			if(i < n - 1 && s[i] == s[i + 1]){
				i = i + 2;
			}
			else{
				i++;
			}
		}

		cout << count << endl;
	}
	return 0;
}
