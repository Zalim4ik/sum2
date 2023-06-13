#include <iostream>
double sum(double a , double b) {
	
	return  a +b;
}
int main() {
	double a, b;
	std::cin >> a;
	std::cin >> b;
	std:: cout << sum(a , b);
	return 0;
}