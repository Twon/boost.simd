//==================================================================================================
/*!
  @file

  @copyright 2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_DEFINITION_NARROW_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_DEFINITION_NARROW_HPP_INCLUDED

#include <boost/simd/function/definition/group.hpp>
#include <boost/simd/detail/dispatch.hpp>

namespace boost { namespace simd
{
  namespace tag
  {
    using narrow_ = group_;
  }

  namespace functional
  {
    BOOST_DISPATCH_CALLABLE_DEFINITION(tag::narrow_,narrow);
  }
  BOOST_DISPATCH_FUNCTION_DEFINITION(tag::narrow_,narrow);
} }

#endif
