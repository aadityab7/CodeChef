#include<iostream>
//#include <string>
//#include <vector>
//max val of long 9223372036854775807
//max val of int 147483647
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		string a ,b;
		cin >>a >> b;

		string m = "";
		for(int i = 0; i <5;i++){
			if(a[i] == b[i]){
				m += 'G';
			}
			else{
				m += 'B';
			}
		}

		cout << m << endl;
	}
	return 0;
}
