#ifndef				CAT_HH_
# define			CAT_HH_

# include			<iostream>

# include			"IAnimal.hh"

class				Cat : public IAnimal
{
public:
  Cat(void);
  ~Cat();
  virtual int			getNumberOfLegs(void) const { return 4; }
  virtual void			speak(void) const { std::cout << "Meow" << std::endl; }
  virtual void			free(void) const { delete this; }
  static IAnimal		*create(void) { return new Cat(); }

protected:

private:
  Cat 			&operator=(const Cat &other);
  Cat(const Cat &other);
};

#endif				/* !CAT_HH_ */
