#ifndef				IANIMAL_HH_
# define			IANIMAL_HH_

class IAnimal
{
public:
  virtual int			getNumberOfLegs(void) const = 0;
  virtual void			speak(void) const = 0;
  virtual void			free(void) const = 0;
};
typedef IAnimal *	(*CreateAnimalFn)(void);

#endif				/* !IANIMAL_HH_ */
