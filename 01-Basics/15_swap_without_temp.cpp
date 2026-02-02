// swap two numbers without using third variiable
# include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout << "After swapping:" << endl <<"first number=" << num1 << " and second number=" << num2 << endl;
    return 0;
}
