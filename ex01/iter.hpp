/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 11:41:54 by pecavalc          #+#    #+#             */
/*   Updated: 2026/06/30 18:31:54 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T, typename U>
void iter(T array, const std::size_t len, U f) {
  for (std::size_t i = 0;  i < len; i++) {
    f(array[i]);
  }
};

#endif
