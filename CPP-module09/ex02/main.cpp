/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:47:21 by mchliyah          #+#    #+#             */
/*   Updated: 2023/04/07 01:24:58 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "PmergeMe.hpp"

 int main(int argc, char **argv) {
	try
	{
		if (argc < 2)
			throw std::runtime_error("error");
		for (int i = 1; i < argc; i++) {
			if (!is_positive(argv[i]))
				throw std::runtime_error("error");
		}
		std::vector<int> arr;
		for (int i = 1; i < argc; i++) {
			arr.push_back(atoi(argv[i]));
		}
		std::cout << "Before : " ;
		for (size_t i = 0; i < arr.size(); i++) {
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
		clock_t start = clock();
		mergeSort(arr, 0, arr.size() - 1, 10);
		clock_t end = clock();
		std::cout << "After : " ;
		for (size_t i = 0; i < arr.size(); i++) {
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "Time to process a range of " << arr.size() << " elements : " << ((double)(end - start) / CLOCKS_PER_SEC) * 1000 << "us" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}