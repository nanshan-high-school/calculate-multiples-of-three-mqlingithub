#include <iostream>
using namespace std;

int main() {
  string str;
  long int num1 = 0,num2 = 0,number;
  int count = 1,meet = 0;
  char math;
  cout << "請輸入要運算的算式:";
  cin >> str;
  for (int i = 0; i < count; i++) {
    if (str[i] == '\0') count = 0;
    else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
      math = str[i];
      meet = 1;
      count++;
    }
    else if (meet == 0) {
      num1 = str[i]-48 + (num1 * 10);
      count++;
    }
    else {
      num2 = str[i]-48 + (num2 * 10);
      count++;
    }
  }
  if (math == '+') {
     cout << num1 + num2;
     number = num1 + num2;
  }
  if (math == '-') {
     cout << num1 - num2;
     number = num1 - num2;
  }
  if (math == '*') {
     cout << num1 * num2;
     number = num1 * num2;
  }
  if (math == '/') {
     cout << num1 / num2;
     number = num1 / num2;
  } 

  if ((number / 3) * 3 == number) cout << "是3的倍數。";
  else cout << "不是3的倍數。" << meet;
}
