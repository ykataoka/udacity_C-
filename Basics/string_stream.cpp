#include <iostream>
#include <string>
#include <sstream>

int main(){
  std::string stringLength;
  float height = 0;
  float width = 0;
  float area = 0;

  // read height
  std::cout << "Enter length of room height: ";
  std::getline(std::cin, stringLength);
  std::stringstream(stringLength) >> height;
  std::cout << "You entered "<< height <<"\n";

  // read width
  std::cout << "Enter length of room width: ";
  std::getline(std::cin, stringLength);
  std::stringstream(stringLength) >> width;
  std::cout << "You entered "<< width <<"\n";
  
  // show area
  area = height * width;
  std::cout << "The area is " << area;

  return 0;
}
