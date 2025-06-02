#include "Calculator.h"
#include <iostream>
#include <string>
#include <sstream>

int main () {
	std::string input;
	Calculator calc; // Create an instance of Calculator

	while (true) {
		std::cout << "Enter 2 numbers (q: exit): ";

		std::getline (std::cin, input);

		if (input == "q" || input == "Q") {
			std::cout << "Exit program" << std::endl;
			break;
		}

		std::istringstream iss (input);
		double num1, num2;

		if (iss >> num1 >> num2) {
			double result = calc.add (num1, num2);
			std::cout << "Result: " << result << std::endl;
		}
		else {
			std::cout << "Please enter 2 numbers" << std::endl;
		}
	}

	return 0;
}
