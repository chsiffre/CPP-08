/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:29:47 by charles           #+#    #+#             */
/*   Updated: 2024/02/06 17:20:11 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template < typename T >
void    easyfind( T& container, int value )
{
    if (std::find( container.begin(), container.end(), value ) != container.end())
        std::cout << "Found" << std::endl;
    else
        std::cout << "Not found" << std::endl;
}