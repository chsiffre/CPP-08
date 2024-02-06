/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:22:00 by charles           #+#    #+#             */
/*   Updated: 2024/02/06 17:30:48 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(unsigned int N) : maxNbr(N) {
    
}

void Span::addNumber(int num) {
    if (numbers.size() >= maxNbr) {
        throw std::overflow_error("Span is full. Cannot add more numbers.");
    }
    numbers.push_back(num);
}

int Span::shortestSpan() const {
    if (numbers.size() < 2) {
        throw std::logic_error("Not enough numbers to calculate span.");
    }

    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int minSpan = std::numeric_limits<int>::max();

    for (size_t i = 1; i < sortedNumbers.size(); ++i) {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        minSpan = std::min(minSpan, span);
    }

    return minSpan;
}

int Span::longestSpan() const {
    if (numbers.size() < 2) {
        throw std::logic_error("Not enough numbers to calculate span.");
    }

    return *std::max_element(numbers.begin(), numbers.end()) -
           *std::min_element(numbers.begin(), numbers.end());
}