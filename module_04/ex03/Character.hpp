#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"
#include "AMateria.hpp"

typedef struct s_list
{
    AMateria *content;
    struct s_list *next;
    struct s_list *previous;
} t_list;

class Character;

class Character : public ICharacter {
    private:
        t_list*     _inventory;
        std::string _name;
    public:
        // Coplien Form
        Character();
        Character(std::string);
        Character(Character const &);
        virtual ~Character();
        Character &operator=(Character const &);


        // Methods
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);


        // Getters
        std::string const & getName() const;
        t_list* getInventory() const;
};


int lstLenght(t_list *lst);
void freelst(t_list **lst);
void addlstback(t_list **lst, t_list *next);
t_list *createCell(AMateria *next);
t_list *copyList(t_list *lst);

#endif