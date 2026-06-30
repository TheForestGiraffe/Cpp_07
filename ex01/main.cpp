/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 16:43:46 by pecavalc          #+#    #+#             */
/*   Updated: 2026/06/30 18:57:51 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "iter.hpp"

template <typename T>
void add_to_self(T& element) {
  std::cout << element + element << " ";
}

static void test_int_array();
static void test_const_int_array();
static void test_string_array();
static void test_float_array();

int main() {
  test_int_array();
  test_const_int_array();
  test_string_array();
  test_float_array();
  return 0;
}

static void test_int_array() {
  std::cout << std::setw(25) << std::left << "int array: ";
  
  int int_array[4];
  for (std::size_t i = 0; i < 4; i++) {
    int_array[i] = i;
    std::cout << int_array[i];
    if (i != 3) {
      std:: cout << " ";
    }
  }

  std::cout << '\n' << std::setw(25) << std::left << "add_to_self() output: ";
  ::iter(int_array, 4, add_to_self<int>);
  std::cout << "\n\n";
}

static void test_const_int_array() {
  std::cout << std::setw(25) << std::left << "const int array: ";

  const int int_array[4] = {33, 22, 51, 24};
  for (std::size_t i = 0; i < 4; i++) {
    std::cout << int_array[i];
    if (i != 3) {
      std:: cout << " ";
    }
  }

  std::cout << '\n' << std::setw(25) << std::left << "add_to_self() output: ";
  ::iter(int_array, 4, add_to_self<const int>);
  std::cout << "\n\n";
}

static void test_string_array() {
  std::cout << std::setw(25) << std::left << "string array: ";

  std::string str_array[4] = {"H", "E", "Y", "!"};
  for (std::size_t i = 0; i < 4; i++) {
    std::cout << str_array[i];
    if (i != 3) {
      std:: cout << " ";
    }
  }

  std::cout << '\n' << std::setw(25) << std::left << "add_to_self() output: ";
  ::iter(str_array, 4, add_to_self<std::string>);
  std::cout << "\n\n";
}

static void test_float_array() {
  std::cout << std::setw(25) << std::left << "float array: ";

  float flt_array[4] = {1.1f, 2.2f, 3.3f, 4.4f};
  for (std::size_t i = 0; i < 4; i++) {
    std::cout << flt_array[i];
    if (i != 3) {
      std:: cout << " ";
    }
  }

  std::cout << '\n' << std::setw(25) << std::left << "add_to_self() output: ";
  ::iter(flt_array, 4, add_to_self<float>);
  std::cout << "\n\n";
}
