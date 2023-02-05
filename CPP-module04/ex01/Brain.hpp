/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:04:16 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/31 20:08:10 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
// LIBS ========================================================================
// =============================================================================

// PROTOTYPES ==================================================================
class Brain;
// =============================================================================

// CLASS DEFINITIONS ===========================================================
class Brain
{
    private:
    std::string ideas[100];
    public:
        // Coplien
        Brain();
        Brain(std::string idea);
        Brain(const Brain&);
        ~Brain();
        Brain &operator=(const Brain& op);

        // Getter - Setter
        // virtual std::string GetIdeas(void) const ;
        // void SetIdeas(std::string idea);
};

#endif