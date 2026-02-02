// Modulus opeartor
# include <iostream>
using namespace std;
int main(){
    int dividend,divisor,remainder;
    cout << "Enter the dividend: " << endl;
    cin >> dividend;
    cout << "Enter the divisor: " << endl;
    cin >> divisor;
    if(divisor!=0){
        cout << "Remainder is " << dividend%divisor <<endl;
    }
    else{
        cout << "Division by zero is not allowed";
    }
    return 0;
}
