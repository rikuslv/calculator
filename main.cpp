#include <iostream>
#include <string>
using namespace std;

void print(string text){
    cout << text ;
}

void print(double num){
    cout << num;
}

int main(){
    double num1, num2;
    char op;

    print("This is mini cauculator!\n");

    print("Enter your first number: ");
    cin >> num1;

    print("Enter your second number: ");
    cin >> num2;
    
    print("Chose operation (+, -, *, /): ");
    cin >> op;


    if(op == '+'){
        print(num1 + num2);
    }
    else if(op == '-'){
        print(num1 - num2);
    }
    else if(op == '*'){
        print(num1 * num2);
    }
    else if(op == '/'){
        print(num1 / num2);
    }
    else{
        print("Error, operation not exist!");
    }
    return 0;
}