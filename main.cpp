#include <iostream>
int main() {
	double num1;
	double num2;
	char op;
	while (true) {
		std::cout << "num 1 here" << std::endl;
		std::cin >> num1;
		std::cout << "num 2 here" << std::endl;
		std::cin >> num2;
		std::cout << "operation here" << std::endl;
		std::cin >> op;
		if (op == '+') {
			std::cout << num1 + num2 << std::endl;
			std::cout << "-----" << std::endl;
		}
		else if (op == '-') {
			std::cout << num1 - num2 << std::endl;
			std::cout << "-----" << std::endl;
		}
		else if (op == '*') {
			std::cout << num1 * num2 << std::endl;
			std::cout << "-----" << std::endl;
		}
		else if (op == '/') {
			std::cout << num1 / num2 << std::endl;
			std::cout << "-----" << std::endl;
		}
		else {
			std::cout << "please sumbit a corret operation" << std::endl;
			std::cout << "-----" << std::endl;
		}
	}
}
