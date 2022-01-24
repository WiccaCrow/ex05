#include "Warlock.hpp"

int main()
{
  Warlock const richard("Richard", "Mistress of Magma");
  richard.introduce();
  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

  Warlock* jack = new Warlock("Jack", "the Long");
  jack->introduce();
  jack->setTitle("the Mighty");
  jack->introduce();

  delete jack;

  // Warlock bob;
  // Warlock bob("bob", "Magic");
  // Warlock jim("jim", "BOBOBO");
  // bob = jim;
  // Warlock jacky(jim);


  return (0);
}
