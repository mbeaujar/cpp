/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeaujar <mbeaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 14:49:04 by mbeaujar          #+#    #+#             */
/*   Updated: 2021/07/02 15:38:46 by mbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "Character.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        t_list* _inventory;
        int     _len;
        t_list* newlst(AMateria *materia);
        void addlstback(t_list **lst, t_list *add);
        void freelst(t_list *head);
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &copy);
        ~MateriaSource();
        MateriaSource & operator=(MateriaSource const &copy);
        void learnMateria(AMateria *to);
        AMateria *createMateria(std::string const &type);

        t_list* getInventory() const;
        int getLen() const;
};

#endif