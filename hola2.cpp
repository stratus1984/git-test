#include <iostream>
#include <string>
int main ()
{
  string a;
  std::cout << "¿Cuál es tu nombre?";
  getline (cin,a);
  std::cout << "Hola " << a << ".\n";
  std::cout << "¿Read-Teaming, Pentesting o CNE?";
  getline (cin, a);
  cout << "Bienvenido" << a << " \n";
  return 0;
}