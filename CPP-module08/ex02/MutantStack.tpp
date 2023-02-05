/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:35:35 by mchliyah          #+#    #+#             */
/*   Updated: 2022/12/02 20:56:27 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
MutantStack<T>::MutantStack(){
    std::cout << "stack default constructor called !!" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& copy){
    (void)copy;
    std::cout << "stack constructor called !!" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack(){
    std::cout << "stack destructor called !!" << std::endl;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& copy){
    (void) copy;
    std::cout << "stack destructor called !!" << std::endl;
}