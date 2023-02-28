/*Indicate which, if any, of the following output statements are
legal:*/

#include <iostream>

int main() {
  std::cout << "/*";  // OK
  std::cout << "*/";  // OK
  //std::cout << /* "*/" */;  // Error
  std::cout << /*  "*/" /*  "/*"  */;  // OK
  return 0;
}
