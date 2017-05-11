/*The example for using cin from the video.
**There is an error in the video. The correct
**program is shown below.
*/

#include <iostream>
#include <string>

int main() {
  std::string s;
  if (std::getline(std::cin, s)) {
    std::cout << s << std::endl;
  }
}
