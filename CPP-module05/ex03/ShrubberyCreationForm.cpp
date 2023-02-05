/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:31 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/14 16:51:51 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : Form("", 145, 137),  Target("unknown_target"){
	std::cout << "Shrubbery default constructor called " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("", 145, 137), Target(target){
	std::cout << "Shrubbery constructor called " << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) :
	Form(copy.getName(), copy.getSignedgrade(), copy.getExecute()), Target(copy.getTarget()){
	this->setIssigned(copy.getIssigned());
	std::cout<< "ShrubberyCreationForm copy constructor called " << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Shrubbery destructor called " << std::endl;

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	if (this == &copy)
		return (*this);
	this->setIssigned(copy.getIssigned());
	this->Target = copy.getTarget();
	return (*this);
}

// getTER - SETTER =============================================================

	std::string ShrubberyCreationForm::getTarget() const {
		return (this->Target);
	}

    void ShrubberyCreationForm::SetTarget(std::string target){
		this->Target = target;
	}

// ADDITIONNAL =================================================================

  	void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{		

		std::ofstream	myfile;
		std::string		fileName = this->Target + "_shrubbery";
		
		this->checkExecution(executor); //if the bureaucrat cant execute you'll get an axeception 
		
		myfile.open(fileName.c_str(), std::ios::out);

		myfile << "         &&& &&  & && " << std::endl;
		myfile << "      && &/&\\|& ()|/ @, &&" << std::endl;
		myfile << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
		myfile << "   &() &\\/&|()|\\/&\\/ '%\" & ()" << std::endl;
		myfile << "  &_\\_&&_\\ |& |&&/&__%_/_& &&"<< std::endl;
		myfile << "&&   && & &| &| /& & % ()& /&&"<< std::endl;
		myfile << " ()&_---()&\\&\\|&&-&&--%---()~"<< std::endl;
		myfile << "     &&     \\|||"<< std::endl;
		myfile << "             |||"<< std::endl;
		myfile << "             |||"<< std::endl;
		myfile << "             |||"<< std::endl;
		myfile << "       , -=-~  .-^- _"<< std::endl;

myfile << std::endl<< std::endl<< std::endl;

		myfile << "      ,.," << std::endl;
		myfile << "      MMMM_    ,..," << std::endl;
		myfile << "        \"_ \"__\"MMMMM          ,...,," << std::endl;
		myfile << " ,..., __.\" --\"    ,.,     _-\"MMMMMMM" << std::endl;
		myfile << "MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"" << std::endl;
		myfile << " \"\"\"\"\"    \"\" , \\_.   \"_. .\"" << std::endl;
		myfile << "        ,., _\"__ \\__./ .\"" << std::endl;
		myfile << "       MMMMM_\"  \"_    ./" << std::endl;
		myfile << "        ''''      (    )" << std::endl;
		myfile << " ._______________.-'____\"---._." << std::endl;
		myfile << "  \\                          /" << std::endl;
		myfile << "   \\________________________/" << std::endl;
		myfile << "   (_)                    (_)" << std::endl;
		myfile.close();
		std::cout << "Created the shrug in " << this->Target << "_shrubbery"
			<< std::endl;
  	}
  
// EXCEPTIONS ==================================================================

// FUNCTIONS SUP ===============================================================
