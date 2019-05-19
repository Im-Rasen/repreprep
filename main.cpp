#include <iostream>
#include "Deduction_c_s.h"
#include "Deduction_s_t.h"
#include "Deduction_t_c.h"

std::string help(
	"\\ circle to make a circle\n"
	"\\ square to make a square\n"
 	"\\ triangle to make an isosceles triangle\n"
	"\\ deduce_c_s to deduce circle from square\n"
	"\\ deduce_s_t to deduce square from triangle\n"
	"\\ deduce_t_c to deduce triangle from circle\n"
	"\\ exit to exit\n"
);

int main() {

	double radius = 0, side_s = 0, side_t = 0;
	std::string s;

	std::cout << "Enter \"help\" to get help\n";

    while (true) {

        std::getline(std::cin, s);

        if (s == "help") {
        	std::cout << help;
        }

        if (s == "square") {
        	std::cout << "Enter the side of the square, please\n";
        	std::cin >> side_s;
        	Square square(side_s);
        	std::cout << "Square (created square) = " << square.get_square() << std::endl;
        }

        if (s == "circle") {
        	std::cout << "Enter the radius, please\n";
        	std::cin >> radius;
        	Circle circle(radius);
        	Circle *instance = &circle;
        	Figure *p = instance;
        	std::cout << "Square of (created circle) = " << p->get_square() << std::endl;
        }

        if (s == "deduce_c_s") {
        	std::cout << "Enter the radius, please\n";
        	std::cin >> radius;
        	std::cout << "Enter the side of the square, please\n";
        	std::cin >> side_s;
        	Deduction_c_s deduction_c_s(radius,side_s);
        	std::cout << "Square (created figure) = " << deduction_c_s.get_square() << std::endl;
        }

		if (s == "deduce_s_t") {
			std::cout << "Enter the side of the square, please\n";
			std::cin >> side_s;
			std::cout << "Enter the side of the triangle, please\n";
			std::cin >> side_t;
			Deduction_s_t deduction_s_t(side_s,side_t);
			std::cout << "Square (created figure) = " << deduction_s_t.get_square() << std::endl;
		}

		if (s == "deduce_t_c") {
			std::cout << "Enter the side of the triangle, please\n";
			std::cin >> side_t;
			std::cout << "Enter the radius, please\n";
			std::cin >> radius;
			Deduction_t_c deduction_t_c(side_t,radius);
			std::cout << "Square (created figure) = " << deduction_t_c.get_square() << std::endl;
		}

        if (s == "exit")
        	break;
		}
}