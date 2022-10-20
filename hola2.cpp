#include <iostream>
#include <string>
int main ()
{
  std::string a;
  std::cout << "¿Cuál es tu nombre?" << std::endl;
  getline (std::cin,a);
  std::cout << "Hola " << a << ".\n";
  std::cout << "Si te agrada el Read-Teaming, Pentesting, CNE" << std::endl << "Bienvenido!!!" << std::endl;
  return 0;
}