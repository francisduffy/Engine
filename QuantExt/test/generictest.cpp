#include "toplevelfixture.hpp"
#include "utilities.hpp"

#include <boost/test/unit_test.hpp>

BOOST_FIXTURE_TEST_SUITE(QuantExtTestSuite, qle::test::TopLevelFixture)

BOOST_AUTO_TEST_SUITE(GenericTest)

BOOST_AUTO_TEST_CASE(testGeneric) {
    BOOST_TEST_MESSAGE("Generic test case ...");
    BOOST_CHECK(true);
}

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE_END()
