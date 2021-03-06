//==================================================================================================
/**
  Copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
**/
//==================================================================================================
#include <simd_test.hpp>
#include <boost/simd/function/sin.hpp>
#include <boost/simd/pack.hpp>
#include <boost/simd/function/std.hpp>


namespace bs = boost::simd;

template <typename T, std::size_t N, typename Env>
void test(Env& $)
{
  using p_t = bs::pack<T, N>;

  T a1[N], b[N], c[N];
  for(std::size_t i = 0; i < N; ++i)
  {
    a1[i] = (i%2) ? T(i) : -T(i);
    b[i] = bs::sin(a1[i]) ;
    c[i] = bs::std_(bs::sin)(a1[i]);
  }

  p_t aa1(&a1[0], &a1[0]+N);
  p_t bb (&b[0], &b[0]+N);
  p_t cc (&c[0], &c[0]+N);

  STF_ULP_EQUAL(bs::sin(aa1), bb, 0.5);
  STF_ULP_EQUAL(bs::std_(bs::sin)(aa1), cc, 0.5);
}

STF_CASE_TPL("Check sin on pack" , STF_IEEE_TYPES)
{
  static const std::size_t N = bs::pack<T>::static_size;

  test<T, N>($);
  test<T, N/2>($);
  test<T, N*2>($);
}

template <typename T, std::size_t N, typename Env>
void testcs(Env& $)
{
  namespace bst = bs::tag;
  using p_t = bs::pack<T, N>;

  T a1[N], b[N], c[N];
  for(std::size_t i = 0; i < N; ++i)
  {
    a1[i] = (i%2) ? T(i) : -T(i);

    b[i] = bs::sin(a1[i], bst::clipped_small_) ;
    c[i] = bs::std_(bs::sin)(a1[i]);
  }

  p_t aa1(&a1[0], &a1[0]+N);
  p_t bb (&b[0], &b[0]+N);
  p_t cc (&c[0], &c[0]+N);
  STF_ULP_EQUAL(bs::sin(aa1, bst::clipped_small_), bb, 0.5);
  STF_ULP_EQUAL(bs::std_(bs::sin)(aa1), cc, 0.5);
}

STF_CASE_TPL("Check sin sin clipped_small_ on pack" , STF_IEEE_TYPES)
{
  static const std::size_t N = bs::pack<T>::static_size;

  testcs<T, N>($);
  testcs<T, N/2>($);
  testcs<T, N*2>($);
}

template <typename T, std::size_t N, typename Env>
void testcm(Env& $)
{
  namespace bst = bs::tag;
  using p_t = bs::pack<T, N>;

  T a1[N], b[N], c[N];
  for(std::size_t i = 0; i < N; ++i)
  {
    a1[i] = (i%2) ? T(i) : -T(i);

    b[i] = bs::sin(a1[i], bst::clipped_medium_) ;
    c[i] = bs::std_(bs::sin)(a1[i]);
  }

  p_t aa1(&a1[0], &a1[0]+N);
  p_t bb (&b[0], &b[0]+N);
  p_t cc (&c[0], &c[0]+N);
  STF_ULP_EQUAL(bs::sin(aa1, bst::clipped_medium_), bb, 0.5);
  STF_ULP_EQUAL(bs::std_(bs::sin)(aa1), cc, 0.5);
}

STF_CASE_TPL("Check sin sin clipped_medium_ on pack" , STF_IEEE_TYPES)
{
  static const std::size_t N = bs::pack<T>::static_size;

  testcm<T, N>($);
  testcm<T, N/2>($);
  testcm<T, N*2>($);
}



