#include<iostream>
using namespace std;

bool multiple (int num, int i){
    return (num % i == 0);
}

int main (){
    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the multiple: ";
    cin >> i;

    if(multiple(num, i)){
        cout << num << " is a multiple of " << i << endl;
    }else{
        cout << num << " is not a multiple of " << i << endl;
    }
    return 0;
}
