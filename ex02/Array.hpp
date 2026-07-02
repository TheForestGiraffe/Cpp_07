/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:24:46 by pecavalc          #+#    #+#             */
/*   Updated: 2026/07/02 17:05:54 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {
 public:
  Array();
  explicit Array(unsigned int n);
  Array(const Array& other);
  Array& operator=(const Array& other);
  ~Array();

  T& operator[](unsigned int idx);
  const T& operator[](unsigned int idx) const;
  unsigned int size() const;

 private:
  unsigned int size_;
  T* data_;

};

#include "Array.tpp"

#endif