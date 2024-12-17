#include<iostream>
using namespace std;

struct bit {
    unsigned int num;
    unsigned int reversednum;
};

unsigned int rbit(unsigned int bit){
    unsigned int result = 0;
    for(int i = 0; i < 32; i++){
        result <<= 1;
        result |= (bit & 1);
        bit >>= 1;
    }
    return result;
}

void pbits(unsigned int bit){
    for(int i = 31; i >= 0; i--){
        cout << ((bit >> i) & 1);
    }
    cout << endl;
}

int main(){
    bit info;
    cout << "Enter a number: ";
    cin >> info.num;
    cout << "Original bits: ";
    pbits(info.num);

    info.reversednum = rbit(info.num);
    cout << "Reversed bits: ";
    pbits(info.reversednum);

    return 0;
}
