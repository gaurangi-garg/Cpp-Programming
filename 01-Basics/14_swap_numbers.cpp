// swap two numbers using inbuilt function
# include <iostream>
# include <utility>
using namespace std;
int main(){
    int num1,num2,temp;
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;
    swap(num1,num2);
    cout << "After swapping:" << endl <<"first number=" << num1 << " and second number=" << num2 << endl;
    return 0;
}
