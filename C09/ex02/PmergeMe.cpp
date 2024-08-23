/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:13:38 by bbenidar          #+#    #+#             */
/*   Updated: 2024/08/20 14:20:17 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
    *this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if (this != &other)
    {
        _k = other._k;
        _v = other._v;
        _d = other._d;
        _timeV = other._timeV;
        _timeD = other._timeD;
    }
    return *this;
}

PmergeMe::PmergeMe(char **av)
{
    int i = 1;
    _k = 100;
    while (av[i])
    {
        int j = 0;
        if (av[i][0] == '\0')
        {
            std::cout << "Error" << std::endl;
            exit(1);
        }
        while (av[i][j])
        {
            if (isdigit(av[i][j]) == 0 || (atoi(av[i]) < 0))
            {
                std::cout << "Error"  << std::endl;
                exit(1);
            }
            j++;
        }
        _v.push_back(atoi(av[i]));
        _d.push_back(atoi(av[i]));
        i++;
    }
}

PmergeMe::~PmergeMe()
{
    
}

void PmergeMe::beforePrintVec()
{
    std::cout << "Before: ";
    for (std::vector<int>::const_iterator i = _v.begin(); i != _v.end(); ++i)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::beforePrintDeque()
{
    std::cout << "Before: ";
    for (std::deque<int>::const_iterator i = _d.begin(); i != _d.end(); ++i)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::afterPrintVec()
{
    std::cout << "After: ";
    for (std::vector<int>::const_iterator i = _v.begin(); i != _v.end(); ++i)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::afterPrintDeque()
{
    std::cout << "After: ";
    for (std::deque<int>::const_iterator i = _d.begin(); i != _d.end(); ++i)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::printTimeofVec(int ac)
{
    std::cout << "Time to process a range of " << ac - 1 << " with std::vector: "
              << std::fixed << std::setprecision(3) << _timeV << " ms" << std::endl;
}

void PmergeMe::printTimeofDeque(int ac)
{
    std::cout << "Time to process a range of "<< ac - 1 <<" with std::deque: " 
                << std::fixed << std::setprecision(3) << _timeD << " ms" << std::endl;
}

void PmergeMe::insertionVec(std::vector<int> &v, int beg, int end)
{
    for (int i = beg; i < end; ++i) 
    {
        int key = v[i + 1];
        std::vector<int>::iterator pos = std::lower_bound(v.begin() + beg, v.begin() + i + 1, key);
        if (pos != v.begin() + i + 1)
            std::rotate(pos, v.begin() + i + 1, v.begin() + i + 2);
        *pos = key;
    }
}

void PmergeMe::mergeVec(std::vector<int> &v, int beg, int mid, int last)
{
    int n1 = mid - beg + 1;
    int n2 = last - mid;
    std::vector<int> Left(n1);
    std::vector<int> Right(n2);

    std::copy(v.begin() + beg, v.begin() + mid + 1, Left.begin());
    std::copy(v.begin() + mid + 1, v.begin() + last + 1, Right.begin());

    int RIDX = 0, LIDX = 0, k = beg;
    
    while (LIDX < n1 && RIDX < n2)
    {
        if (Left[LIDX] <= Right[RIDX])
        {
            v[k++] = Left[LIDX++];
        }
        else
        {
            v[k++] = Right[RIDX++];
        }
    }

    while (LIDX < n1)
    {
        v[k++] = Left[LIDX++];
    }

    while (RIDX < n2)
    {
        v[k++] = Right[RIDX++];
    }

}

void PmergeMe::sortVec(std::vector<int> &v, int beg, int end)
{
    if (end - beg > _k)
    {
        int mid = beg + (end - beg) / 2;
        sortVec(v, beg, mid);
        sortVec(v, mid + 1, end);
        this->mergeVec(v, beg, mid, end);
    }
    else
    {
        this->insertionVec(v, beg, end);
    }
   
}


void PmergeMe::mergeSortVec()
{
    std::vector<int> tmp(_v.size());
    clock_t start = clock();
    {
        int begin = 0;
        int end = _v.size() - 1;
        this->sortVec(_v, begin, end);
    }
    clock_t end = clock();
    _timeV = 1000.0 * (end - start) / CLOCKS_PER_SEC;

}

void PmergeMe::mergeDeque(std::deque<int> &d, int beg, int mid, int last)
{
    int n1 = mid - beg + 1;
    int n2 = last - mid;
    std::deque<int> Left(n1);
    std::deque<int> Right(n2);

    std::copy(d.begin() + beg, d.begin() + mid + 1, Left.begin());
    std::copy(d.begin() + mid + 1, d.begin() + last + 1, Right.begin());

    int RIDX = 0, LIDX = 0, k = beg;

    while (LIDX < n1 && RIDX < n2)
    {
        if (Left[LIDX] <= Right[RIDX])
        {
            d[k++] = Left[LIDX++];
        }
        else
        {
            d[k++] = Right[RIDX++];
        }
    }

    while (LIDX < n1)
    {
        d[k++] = Left[LIDX++];
    }

    while (RIDX < n2)
    {
        d[k++] = Right[RIDX++];
    }
}

void PmergeMe::insertionDeque(std::deque<int> &d, int beg, int end)
{
    for (int i = beg; i < end; ++i) 
    {
        int key = d[i + 1];
        std::deque<int>::iterator pos = std::lower_bound(d.begin() + beg, d.begin() + i + 1, key);
        if (pos != d.begin() + i + 1)
            std::rotate(pos, d.begin() + i + 1, d.begin() + i + 2);
        *pos = key;
    }
}

void PmergeMe::sortDeque(std::deque<int> &d, int l, int r)
{
    if (r - l > _k)
    {
        int mid = l + (r - l) / 2;
        sortDeque(d, l, mid);
        sortDeque(d, mid + 1, r);
        this->mergeDeque(d, l, mid, r);
    }
    else
    {
        this->insertionDeque(d, l, r);
    }
}

void PmergeMe::mergeSortDeque()
{
    std::deque<int> tmp(_d.size());
    clock_t start = clock();
    {
        int begin = 0;
        int end = _d.size() - 1;
        this->sortDeque(_d, begin, end);
    }
    clock_t end = clock();
    _timeD = 1000.0 * (end - start) / CLOCKS_PER_SEC;
}
