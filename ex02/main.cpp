/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:27:37 by pecavalc          #+#    #+#             */
/*   Updated: 2026/07/02 22:30:41 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {
  std::cout << "EMPTY INT ARRAY:" << std::endl;
  Array<int> empty;
  std::cout << "Size: " << empty.size() << std::endl;
  std::cout << "Try printing empty[0]:" << std::endl;
  try {
    std::cout << empty[0] << std::endl; 
  }
  catch (const std::out_of_range e) {
    std::cout << "Exception caugth: " << e.what() << std::endl;
  }
  std::cout << std::endl;


  std::cout << "INITIALIZED CHAR ARRAY, 10 ELEMENTS:" << std::endl;
  Array<char> char_array(10);
  std::cout << "Size: " << char_array.size() << std::endl;
  std::cout << "Try printing char_array[10]:" << std::endl;
  try {
    std::cout << char_array[10] << std::endl; 
  }
  catch (const std::out_of_range e) {
    std::cout << "Exception caugth: " << e.what() << std::endl;
  }
  std::cout << std::endl;
  std::cout << "Print char_array[2]: " << char_array[2] << std::endl;
  char_array[2] = 'H';
  std::cout << "Modify char_array[2] to H and print it: " << char_array[2] << '\n';
  std:: cout << std::endl;


  std::cout << "INITIALIZED STRING ARRAY, 1000 ELEMENTS:" << std::endl;
  Array<std::string> str_array(1000);
  std::cout << "Size: " << str_array.size() << std::endl;
  std::cout << "Try printing str_array[1000]:" << std::endl;
  try {
    std::cout << str_array[1000] << std::endl; 
  }
  catch (const std::out_of_range e) {
    std::cout << "Exception caugth: " << e.what() << std::endl;
  }
  std::cout << std::endl;
  std::cout << "Print str_array[999]: " << str_array[999] << std::endl;
  str_array[999] = "Wow!";
  std::cout << "Modify str_array[999] to 'Wow!' and print it: " << str_array[999] << '\n';
  std:: cout << std::endl; 

  return 0;
}