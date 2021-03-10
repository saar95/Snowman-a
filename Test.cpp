#include "doctest.h"
#include "snowman.hpp"
#include <stdexcept>
#include <string>
#include <iostream>

using namespace ariel;
using namespace std;


TEST_CASE("Above 8 digits") {
	CHECK_THROWS(snowman(1233212321));
	CHECK_THROWS(snowman(123321231));
	CHECK_THROWS(snowman(1232412132));
	CHECK_THROWS(snowman(2132212321));
	CHECK_THROWS(snowman(1111111111));

}

TEST_CASE("Under 8 digits") {
	CHECK_THROWS(snowman(123));
	CHECK_THROWS(snowman(1));
	CHECK_THROWS(snowman(1233212));
	CHECK_THROWS(snowman(123122));
	CHECK_THROWS(snowman(1233211));
}

TEST_CASE("Illigal digit") {
	CHECK_THROWS(snowman(12542123));
	CHECK_THROWS(snowman(45698545));
	CHECK_THROWS(snowman(99999999));
	CHECK_THROWS(snowman(-123122221));
	CHECK_THROWS(snowman(12325213));
}
TEST_CASE("Good snowman") {
	CHECK(snowman(21114411) == "\n  ___  \n ..... \n (.,.) \n ( : ) \n ( : ) \n");
	CHECK(snowman(44114411) == "\n  ___  \n (_*_) \n (. .) \n ( : ) \n ( : ) \n");
	CHECK(snowman(11114411) == "\n       \n _===_ \n (.,.) \n ( : ) \n ( : ) \n");
	CHECK(snowman(44414411) == "\n  ___  \n (_*_) \n (- .) \n ( : ) \n ( : ) \n");
	CHECK(snowman(22224411) == "\n  ___  \n ..... \n (o.o) \n ( : ) \n ( : ) \n");
	CHECK(snowman(22212411) == "\n  ___  \n ..... \n\\(o..) \n ( : ) \n ( : ) \n");
	CHECK(snowman(11111111) == "\n       \n _===_ \n (.,.) \n<( : )>\n ( : ) \n");
	CHECK(snowman(44441144) == ("\n  ___  \n (_*_) \n (- -) \n<(   )>\n (   ) \n"));
	CHECK(snowman(12441143) == ("\n _===_ \n (-.-) \n (> <) \n (___) \n"));
}
