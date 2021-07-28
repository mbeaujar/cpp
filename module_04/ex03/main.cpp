#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    Character william("william");
    Character john("john");
    tmp = src->createMateria("ice");
    william.equip(tmp);
    john = william;
    john.use(0, *bob);
    john.use(1, *bob);
    john.unequip(-1);
    john.unequip(5);
    Character jim("jim");
    jim.use(0, *bob);
    delete bob;
    delete me; 
    delete src;
    return 0;
}