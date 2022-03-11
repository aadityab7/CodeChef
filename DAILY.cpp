#include<iostream>
#include <string>
#include <vector>
//max val of long 9223372036854775807
//max val of int 147483647
using namespace std;

int fact(int numb){
    int fact = 1;
    for(int i = 2; i <= numb; i++){
        fact *= i;
    }
    return fact;
}

int main(){
		int x, n;
		cin >> x >> n;

		std::vector<string> arr;
		for(int i = 0; i < n; i++){
			string s;
			cin >> s;
			arr.push_back(s);
		}
		
		int ans = 0;

		for(int i = 0; i < n; i++){
			for(int j = 0; j < 9; j++){
				int sum = 0;
				int num = (j * 4);
				for(int k = 0; k < 4; k++){
					if(arr[i][num + k] == '0'){
						sum++;
					}
				}
				for(int k = 0; k < 2; k++){
					if(arr[i][54 - (num / 2) - k - 1] == '0'){
						sum++;
					}
				}

				if(sum >= x){
					ans += fact(sum) / (fact(x) * fact(sum - x));
				} 
			}
		}

		cout << ans << endl;
	
	return 0;
}
