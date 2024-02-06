/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:31:49 by charles           #+#    #+#             */
/*   Updated: 2024/02/06 16:42:53 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {

    int array[] = {1,2,3,4,5};

    std::vector <int> vect(array, array + sizeof( array ) / sizeof( int ));
    std::list <int> list(array, array + sizeof( array ) / sizeof( int ));
    
    int searchNbrVect = 3;
    int searchNbrList = 10;

    easyfind(vect, searchNbrVect);
    easyfind(list, searchNbrList);

    return 0;
}