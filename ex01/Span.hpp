/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:22:03 by charles           #+#    #+#             */
/*   Updated: 2024/02/06 17:30:59 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <limits>

class Span {
private:
    std::vector<int> numbers;
    unsigned int maxNbr;

public:
    Span(unsigned int N);
    void addNumber(int num);
    int shortestSpan() const;
    int longestSpan() const;
};

#endif
