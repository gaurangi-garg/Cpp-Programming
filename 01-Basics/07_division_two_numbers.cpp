// Division two numbers
# include <iostream>
using namespace std;
int main(){
  int num1,num2,quotient;
  cout << "Enter First number:" << endl;
  cin >> num1 ;
  cout << "Enter second number:" << endl;
  cin >> num2;
  if(num2!=0){
      quotient=num1/num2;
      cout << "The quotient is " << quotient;
  }
  else{
      cout << "Division by zero is not allowed";
  }
  return 0;
}
