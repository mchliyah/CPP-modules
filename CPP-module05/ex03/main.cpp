/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 23:39:38 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/18 00:32:12 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main(void)
{
	
	try
	{
		Bureaucrat b;
		Intern someRandomIntern;
		try
		{
			Form*	r = someRandomIntern.makeForm("wrong form", "Bender");
			r->execute(b);

			delete r;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		Form* rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Form*  rf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		Form*	f = someRandomIntern.makeForm("presidential pardon", "Bender");

		delete rrf;
		delete rf;
		delete f;
		// rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		// delete rrf;
		// rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		// delete rrf;
		// someRandomIntern.makeForm("wrong form", "Bender");
		// delete rrf;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}