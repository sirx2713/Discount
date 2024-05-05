#include <iostream>
#include <cmath>

using namespace std;
int main() {
	int i;
	double j;
	std::cout << "Enter client number: ";
	std::cin >>  i;
	std::cout << "\n" << std::endl;
	
	while (i <= 10)
	{
		/* enter the original price of the TV */
		std::cout << "The price of TV: $";
		std::cin >> j;
		std::cout << "\n" << std::endl;
		
		/* calculate the discount by multiplying the original price by 15% */
		std::cout << "Your discount is: $";
		std::cout << 0.15 * j;
		std::cout << "\n" << std::endl;
		
		/* calculate the total due by subtracting the discount from the original price */
		std::cout << "The total due: $";
		std::cout << j - (0.15 * j);
		std::cout << "\n" << std::endl;
		
		/* print a bill showing the original price, discount, and total due */
		std::cout << "The original price was: $" << j << std::endl;
		std::cout << "The discount was: $";
		std::cout << 0.15 * j;
		std::cout << "\n" << std::endl;
		std::cout << "The total now due is: $";
		std::cout << j - (0.15 * j);
		std::cout << "\n" << std::endl;
		i++;
	}
	for (i = 11; i > 10; i++)
	{
		std::cout << "Your discount is: $0" << std::endl;
		std::cout << "The price of TV: $2100" << std::endl;
		std::cout << "The total due: $2100" << std::endl;
		break;
	}
	return 0;
}