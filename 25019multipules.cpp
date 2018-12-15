#include <iostream>
using namespace std;

int main() {
  string str;
  long int num1 = 0,num2 = 0,number;
  int meet = 0;
  char math;
  cout << "請輸入要運算的算式:";
  cin >> str;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
      math = str[i];
      meet = 1;
    }
    else if (meet == 0) {
      num1 = str[i]-'0' + (num1 * 10);
    }
    else {
      num2 = str[i]-'0' + (num2 * 10);
    }
  }
  if (math == '+') number = num1 + num2;
  if (math == '-') number = num1 - num2;
  if (math == '*') number = num1 * num2;
  if (math == '/') number = num1 / num2;

     cout << number;

  if ((number / 3) * 3 == number) cout << "是3的倍數。";
  else cout << "不是3的倍數。";
}
