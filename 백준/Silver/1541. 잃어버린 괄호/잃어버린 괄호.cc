#include<iostream>
#include<string>
using namespace std;

string str;
int main(void) {
	string num = "";		//	숫자를 저장할 문자열 변수
	bool minus=false;		//	'-' 기호가 나왔는지를 확인하는 변수
	int sum = 0;		//	출력하게될 결과
	cin >> str;
    
	for (int i = 0; i <= str.size(); i++) {
		if (str[i] == '+' || str[i] == '-' || str[i] == '\0') {	
        	//	기호일 경우
			if (minus == true) {
            		//	'-' 기호가 한번이라도 나왔다면 그 뒤의 숫자들은 모두 빼주면 된다.
				sum -= stoi(num);
				num = "";		// 초기화
			}
			else if (minus == false) {
            		//	반대로 '-' 기호가 아직 나오지 않았다면, 나오기 전까지는 모두 더해주면 된다.
				sum += stoi(num);
				num = "";		
			}
		}
		else {		//	숫자일 경우
			num += str[i];
		}
        if(str[i]=='-'){
            minus=true;
        }
	}
	cout << sum;
	return 0;
}