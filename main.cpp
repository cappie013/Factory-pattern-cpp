#include			"AnimalFactory.hh"
#include			"IAnimal.hh"
#include			"Cat.hh"

int				main(void)
{
  IAnimal			*cat = AnimalFactory::getInstance().create("Cat");

  cat->speak();


  return (0);
}
