#ifndef				ANIMALFACTORY_HH_
# define			ANIMALFACTORY_HH_

# include			<map>
# include			<iostream>

# include			"IAnimal.hh"
# include			"Cat.hh"

class				AnimalFactory
{
  typedef std::map<std::string, CreateAnimalFn>	FactoryMap;
  typedef FactoryMap::iterator			FactoryMapIT;
public:
  AnimalFactory(void);
  ~AnimalFactory();
  static AnimalFactory		&getInstance(void);
  void				addAnimal(const std::string &name, CreateAnimalFn pfnCreate);
  IAnimal			*create(const std::string &animal);

private:
  AnimalFactory 			&operator=(const AnimalFactory &other);
  AnimalFactory(const AnimalFactory &other);

  FactoryMap			collection_;
};

#endif				/* !ANIMALFACTORY_HH_ */
