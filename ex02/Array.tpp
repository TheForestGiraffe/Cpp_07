/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:28:45 by pecavalc          #+#    #+#             */
/*   Updated: 2026/07/02 17:12:43 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"
#include <stdexcept>

template <typename T>
Array<T>::Array() : size_(0), data_(new T[0]) {}

template <typename T>
Array<T>::Array(unsigned int n) : size_(n), data_(new T[n]()) {}

template <typename T>
Array<T>::Array(const Array& other) {
  size_ = other.size_;
  data_ = new T[size_];
  for (unsigned int i = 0; i < size_; i++) {
    data_[i] = other.data_[i];
  }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
  if (this != &other) {
    T* new_data = new T[other.size_];
    for (unsigned int i = 0; i < other.size_; i++) {
      new_data[i] = other.data_[i];
    }
    delete[] data_;
    data_ = new_data;
    size_ = other.size_;
  }
  return *this;
}

template <typename T>
Array<T>::~Array() {
  delete[] data_;
}

template <typename T>
T& Array<T>::operator[](unsigned int idx) {
  if (idx >= size_) {
    throw std::out_of_range("The provided array index is out of bounds");
  }
  return data_[idx];
}

template <typename T>
const T& Array<T>::operator[](unsigned int idx) const {
  if (idx >= size_) {
    throw std::out_of_range("The provided array index is out of bounds");
  }
  return data_[idx];
}

template <typename T>
unsigned int Array<T>::size() const {
  return size_;
}

#endif