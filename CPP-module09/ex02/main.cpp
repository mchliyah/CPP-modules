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

void insertion_sort(std::vector<int>& v, int start, int end) {
  for (int i = start + 1; i <= end; i++) {
    int key = v[i];
    int j = i - 1;
    while (j >= start && v[j] > key) {
      v[j + 1] = v[j];
      j--;
    }
    v[j + 1] = key;
  }
}

void merge(std::vector<int>& v, int start, int mid, int end) {
  std::vector<int> temp(end - start + 1);
  int i = start, j = mid + 1, k = 0;
  while (i <= mid && j <= end) {
    if (v[i] <= v[j]) {
      temp[k++] = v[i++];
    } else {
      temp[k++] = v[j++];
    }
  }
  while (i <= mid) {
    temp[k++] = v[i++];
  }
  while (j <= end) {
    temp[k++] = v[j++];
  }
  for (i = start; i <= end; i++) {
    v[i] = temp[i - start];
  }
}

void merge_insertion_sort(std::vector<int>& v, int start, int end) {
  if (end - start + 1 <= 2) {
    insertion_sort(v, start, end);
  } else {
    int mid = start + (end - start) / 2;
    merge_insertion_sort(v, start, mid);
    merge_insertion_sort(v, mid + 1, end);
    merge(v, start, mid, end);
  }
}

void insertion_sort(std::list<int>& l) {
    for (std::list<int>::iterator it = ++l.begin(); it != l.end(); ++it) {
        int key = *it;
        std::list<int>::iterator jt = it;
         while (jt != l.begin() && *(--jt) > key) {
            std::list<int>::iterator tmp = jt;
            std::iter_swap(tmp, ++jt);
        }
        if (*jt > key) {
            l.erase(it);
            l.push_front(key);
        }
    }
}

void merge_insertion_sort(std::list<int>& l) {
  if (l.size() <= 2) {
    insertion_sort(l);
  } else {
    std::list<int> l1, l2;
    std::size_t n = l.size() / 2;
	std::list<int>::iterator it = l.begin();
	std::advance(it, n);
    std::copy(l.begin(), it, std::back_inserter(l1));
    std::copy(it, l.end(), std::back_inserter(l2));
	l.clear();
    merge_insertion_sort(l1);
    merge_insertion_sort(l2);

    std::list<int>::iterator it1 = l1.begin();
    std::list<int>::iterator it2 = l2.begin();

    while (it1 != l1.end() && it2 != l2.end()) {
      if (*it1 < *it2) {
        l.push_back(*it1);
        ++it1;
      } else {
        l.push_back(*it2);
        ++it2;
      }
    }
    while (it1 != l1.end()) {
      l.push_back(*it1);
      ++it1;
    }

    while (it2 != l2.end()) {
      l.push_back(*it2);
      ++it2;
    }
  }
}

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
		std::list<int> lst;
		for (int i = 1; i < argc; i++) {
			arr.push_back(atoi(argv[i]));
			lst.push_back(atoi(argv[i]));
		}
		// std::cout << "Before : " ;
		// for (size_t i = 0; i < arr.size(); i++) {
		// 	std::cout << arr[i] << " ";
		// }
		// std::cout << std::endl;
		// std::cout << "Before : " ;
		// for(std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
		// 	std::cout << *it << " " ;
		// std::cout << std::endl;
		clock_t start = clock();
		merge_insertion_sort(arr, 0, arr.size() - 1);
		clock_t end = clock();

		clock_t start1 = clock();
		merge_insertion_sort(lst);
		clock_t end1 = clock();
		// std::cout << "After : " ;
		// for (size_t i = 0; i < arr.size(); i++) {
		// 	std::cout << arr[i] << " ";
		// }
		// std::cout << std::endl;
		// std::cout << "After : " ;
		// for(std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
		// 	std::cout << *it << " " ;
		// std::cout << std::endl;
		std::cout << "Time to process a range of " << arr.size() << " elements with vector : " << ((double)(end - start) / CLOCKS_PER_SEC) * 1000 << "us" << std::endl;
		std::cout << "Time to process a range of " << lst.size() << " elements eith list : " << ((double)(end1 - start1) / CLOCKS_PER_SEC) * 1000 << "us" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
