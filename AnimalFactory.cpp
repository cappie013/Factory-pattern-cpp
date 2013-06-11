#include			"AnimalFactory.hh"

// CTOR - DTOR

AnimalFactory::AnimalFactory(void)
{
  this->addAnimal("Cat", &Cat::create);
}

AnimalFactory::~AnimalFactory() {}

// PUBLIC METHODS

AnimalFactory			&AnimalFactory::getInstance(void)
{
  static AnimalFactory		that;

  return that;
}

void				AnimalFactory::addAnimal(const std::string &name, CreateAnimalFn pfnCreate)
{
  this->collection_[name] = pfnCreate;
}

IAnimal				*AnimalFactory::create(const std::string &animal)
{
  FactoryMapIT			it = this->collection_.find(animal);
  if (it != this->collection_.end())
    return it->second();
  return NULL;
}
