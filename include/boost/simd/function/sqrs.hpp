//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_SQRS_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_SQRS_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
  @ingroup group-arithmetic

    Computes sqrs value of its parameter.

  **/
  template<typename T> auto sqrs(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-arithmetic

      Function object tied to simd::sqrs

      @see simd::sqrs
    **/
    const boost::dispatch::functor<tag::sqrs_> sqrs = {};
  }
} }
#endif

#include <boost/simd/function/definition/sqrs.hpp>
#include <boost/simd/arch/common/scalar/function/sqrs.hpp>
//#include <boost/simd/arch/common/function/simd/sqrs.hpp>

#endif