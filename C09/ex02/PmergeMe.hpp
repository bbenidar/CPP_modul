/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:12:36 by bbenidar          #+#    #+#             */
/*   Updated: 2024/08/19 10:00:00 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <iomanip> 

class PmergeMe
{
    public:
        int _k;
        std::vector<int>    _v;
        std::deque<int>    _d;
        double _timeV;
        double _timeD;

        PmergeMe();
        PmergeMe(char **av);
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        ~PmergeMe();
        void beforePrintVec();
        void beforePrintDeque();
        void afterPrintVec();
        void afterPrintDeque();
        void printTimeofVec(int ac);
        void printTimeofDeque(int ac);

        void mergeSortVec();
        void mergeSortDeque();
        void sortVec(std::vector<int> &v, int l, int r);
        void sortDeque(std::deque<int> &d, int l, int r);
        void mergeVec(std::vector<int> &v, int beg, int mid, int last);
        void mergeDeque(std::deque<int> &d, int beg, int mid, int last);
        void insertionVec(std::vector<int> &v, int beg, int end);
        void insertionDeque(std::deque<int> &d, int beg, int end);
        
        
};