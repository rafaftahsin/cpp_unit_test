//
// Created by rafaf.tahsin on 2/4/24.
//
#define BOOST_TEST_DYN_LINK
#include "boost/test/unit_test.hpp"
#include "boost/test/included/unit_test.hpp"
#include "adder.h"

BOOST_AUTO_TEST_SUITE(test_suite_1)

    BOOST_AUTO_TEST_CASE(test_case_1)
    {
        int a = 5;
        int b = 6;

        int result = add_number(a, b);

        BOOST_CHECK_EQUAL(11, result);
    }
BOOST_AUTO_TEST_SUITE_END()
