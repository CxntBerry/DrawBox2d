#include <iostream>
#include <string>
#include <math.h>



int main()
{
	std::string SpaceKey = " ";
	std::string SideKeyX = "-";
	std::string SideKeyY = "|";
	int sideSize;
	int xKey;
	int yKey;
	int iterKey;
	int SideKeyIter;
	std::cout << "Please enter a coordinate point X" << std::endl;
	std::cin >> xKey;
	std::cout << "Please enter a coordinate point Y" << std::endl;
	std::cin >> yKey;
	std::cout << "Please enter a side size" << std::endl;
	std::cin >> sideSize;
	int sideEquation = sideSize * std::sqrt(2) / 2;
	int topRightX = xKey + sideEquation;
	int topRightY = yKey + sideEquation;
	int bottomRightX = xKey + sideEquation;
	int bottomRightY = yKey - sideEquation;
	int bottomLeftX = xKey - sideEquation;
	int bottomLeftY = yKey + sideEquation;
	int topLeftX = xKey - sideEquation;
	int topLeftY = xKey - sideEquation;
	for (int i = 1; i < yKey; i++) {
		if (i == topRightY || i == bottomRightY || i == bottomLeftY || i == topLeftY)
		{
			std::cout << "*";
			for (int o = 0; o < i + topRightY; o++) {
				std::cout << SideKeyX;
				SideKeyIter = o;
			}
			std::cout << "*";
			std::cout << "\n";
		}
		else {
			std::cout << ".\n";
		}
		if (i == topLeftY)
		{
			for (int o = i; o < yKey; o++)
			{
				std::cout << SideKeyY;
				for (int a = 0; a < SideKeyIter + 1; a++) {
					std::cout << SpaceKey;
				}
				std::cout << SideKeyY << std::endl;
				iterKey = i;
			}
			break;
		}
	}
	std::cout << SideKeyY;
	for (int i = 1; i < xKey; i++) {
		std::cout << SpaceKey;
	}
	std::cout << "*";
	for (int i = 1; i < SideKeyIter / 2 + 2; i++) {
		std::cout << SpaceKey;
	}
	std::cout << SideKeyY << std::endl;
	for (int i = 1; i < iterKey; i++) {
		std::cout << SideKeyY;
		for (int a = 0; a < SideKeyIter + 1; a++) {
			std::cout << SpaceKey;
		}
		std::cout << SideKeyY << std::endl;
	}
	std::cout << "*";
	for (int i = 1; i < SideKeyIter + 2; i++) {
		std::cout << SideKeyX;
	}
	std::cout << "*\n";
	std::cout << "Top Right: (" << topRightX << ", " << topRightY << ")" << std::endl;
	std::cout << "Top Left: (" << topLeftX << ", " << topLeftY << ")" << std::endl;
	std::cout << "Bottom Left: (" << bottomLeftX << ", " << bottomLeftY << ")" << std::endl;
	std::cout << "Bottom Right: (" << bottomRightX << ", " << bottomRightY << ")" << std::endl;
}