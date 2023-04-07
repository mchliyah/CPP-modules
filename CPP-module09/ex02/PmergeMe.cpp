/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:47:50 by mchliyah          #+#    #+#             */
/*   Updated: 2023/04/06 22:27:20 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void mergeSort(std::vector<int> &arr, int low, int high, int threshold) {
	if (low < high) {
        if (high - low < threshold) {
            // Use insertion sort for small subarrays
            for (int i = low + 1; i <= high; i++) {
                int key = arr[i];
                int j = i - 1;
                while (j >= low && arr[j] > key) {
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = key;
            }
        } else {
            // Divide and conquer using merge sort
            int mid = low + (high - low) / 2;
            mergeSort(arr, low, mid, threshold);
            mergeSort(arr, mid + 1, high, threshold);

            // Merge the two sorted subarrays
            std::queue<int> q1, q2;
            for (int i = low; i <= mid; i++) {
                q1.push(arr[i]);
            }
            for (int i = mid + 1; i <= high; i++) {
                q2.push(arr[i]);
            }
            int i = low;
            while (!q1.empty() && !q2.empty()) {
                if (q1.front() <= q2.front()) {
                    arr[i++] = q1.front();
                    q1.pop();
                } else {
                    arr[i++] = q2.front();
                    q2.pop();
                }
            }
            while (!q1.empty()) {
                arr[i++] = q1.front();
                q1.pop();
            }
            while (!q2.empty()) {
                arr[i++] = q2.front();
                q2.pop();
            }
        }
    }
}

bool is_positive(const char *str)
{
	int value = atoi(str);
	return (std::strlen(str) > 0 && value >= 0);
}
