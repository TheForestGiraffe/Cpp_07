/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:27:37 by pecavalc          #+#    #+#             */
/*   Updated: 2026/07/02 18:00:35 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {
  unsigned int n = 10;
  Array<int>* empty_array = new Array<int>(n);
  std::cout << empty_array[1] << std::endl; 
  delete empty_array;

  return 0;
}