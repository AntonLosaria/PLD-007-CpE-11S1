#include<iostream>
#include<cmath>
using namespace std;


double cels(int fahr){
	return (5.0/9.0) * (fahr-32);
}

double fahr(int cels){
	return (9.0/5.0) * (cels+32);
}

int main(){
	
	cout << "Fahrenheit to Celsius: " << endl;
	for (int f = 32; f<=212; f+=10){
		cout << f << "F = " << cels(f) << " C" << endl;
	}
	
	cout << " Celsius to Fahrenheit: " << endl;
	for (int c = 0; c<=100; c+=10){
		cout << c << "C = " << fahr(c) << " F" << endl;
	}
	
	return 0;
}
