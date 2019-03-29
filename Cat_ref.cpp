#include <iostream.h>

using namespace std;

class Cat
{
public:
  void Cat();
  void Cat(Cat&);
  void ~Cat();
  int GetAge() {return itsAge;}
  int SetAge(int age) {itsAge = age;}
private:
  int itsAge;
};
 
Cat::Cat()
{
  itsAge = 1;
  cout << "Cat constructor...\n";
}
Cat::Cat(Cat&)
{
  cout << "Cat copy constructor...\n";
}
Cat::~Cat()
{
  cout << "Cat destructor...\n";
}

const Cat& FunctionOne(const Cat& theCat);

int main()
{
  
  return 1;
}

const Cat& FunctionOne(const Cat& theCat)
{
  cout << "FunctionOne called...\n";
  cout << "Frisky is " << theCat.GetAge() << " years now <3\n";
  theCat.SetAge(3);
}
  






















 
