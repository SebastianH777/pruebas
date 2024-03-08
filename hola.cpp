#include <iostream>
using namespace std;

void print(string msg){
    cout << msg << endl;
}

int suma(int a, int b){
    return a+b;
}

int main (){
    print("5556");
    print("4444");

    int num=suma(5);
    cout << num << endl;
}