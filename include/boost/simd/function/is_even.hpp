//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IS_EVEN_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IS_EVEN_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
  @ingroup group-predicates

    Computes is_even value of its parameter.

  **/
  template<typename T> auto is_even(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-predicates

      Function object tied to simd::is_even

      @see simd::is_even
    **/
    const boost::dispatch::functor<tag::is_even_> is_even = {};
  }
} }
#endif

#include <boost/simd/function/definition/is_even.hpp>
#include <boost/simd/arch/common/scalar/function/is_even.hpp>
//#include <boost/simd/arch/common/function/simd/is_even.hpp>

#endif