/*
MIT License

Copyright (c) 2019-2020 Emil Barczyński

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#include <gtest/gtest.h>
#include "fast_string"


TEST(FastString, ConversionsTest)
{
	using namespace std::literals;
	namespace fstd = ::fast::std;
	using ff = ::fast::flags;

	EXPECT_EQ(fstd::to_string<3>(999.0)      , "999.000"s);
	EXPECT_EQ(fstd::to_string<3>(99.9)       ,  "99.900"s);
	EXPECT_EQ(fstd::to_string<3>(9.99)       ,   "9.990"s);
	EXPECT_EQ(fstd::to_string<3>(0.999)      ,   "0.999"s);
	EXPECT_EQ(fstd::to_string<3>(0.0999)     ,   "0.100"s);
	EXPECT_EQ(fstd::to_string<3>(0.00999)    ,   "0.010"s);
	EXPECT_EQ(fstd::to_string<3>(0.000999)   ,   "0.001"s);
	EXPECT_EQ(fstd::to_string<3>(999.999)    , "999.999"s);
	EXPECT_EQ(fstd::to_string<3>(99.9999)    , "100.000"s);
	EXPECT_EQ(fstd::to_string<3>(9.99999)    ,  "10.000"s);
	EXPECT_EQ(fstd::to_string<3>(0.999999)   ,   "1.000"s);
	EXPECT_EQ(fstd::to_string<3>(0.0999999)  ,   "0.100"s);
	EXPECT_EQ(fstd::to_string<3>(0.00999999) ,   "0.010"s);
	EXPECT_EQ(fstd::to_string<3>(0.000999999),   "0.001"s);

	EXPECT_EQ(fstd::to_string<3>(-999.0)      , "-999.000"s);
	EXPECT_EQ(fstd::to_string<3>(-99.9)       ,  "-99.900"s);
	EXPECT_EQ(fstd::to_string<3>(-9.99)       ,   "-9.990"s);
	EXPECT_EQ(fstd::to_string<3>(-0.999)      ,   "-0.999"s);
	EXPECT_EQ(fstd::to_string<3>(-0.0999)     ,   "-0.100"s);
	EXPECT_EQ(fstd::to_string<3>(-0.00999)    ,   "-0.010"s);
	EXPECT_EQ(fstd::to_string<3>(-0.000999)   ,   "-0.001"s);
	EXPECT_EQ(fstd::to_string<3>(-999.999)    , "-999.999"s);
	EXPECT_EQ(fstd::to_string<3>(-99.9999)    , "-100.000"s);
	EXPECT_EQ(fstd::to_string<3>(-9.99999)    ,  "-10.000"s);
	EXPECT_EQ(fstd::to_string<3>(-0.999999)   ,   "-1.000"s);
	EXPECT_EQ(fstd::to_string<3>(-0.0999999)  ,   "-0.100"s);
	EXPECT_EQ(fstd::to_string<3>(-0.00999999) ,   "-0.010"s);
	EXPECT_EQ(fstd::to_string<3>(-0.000999999),   "-0.001"s);

	EXPECT_EQ(fstd::to_string<5>(999.0)      , "999.00000"s);
	EXPECT_EQ(fstd::to_string<5>(99.9)       ,  "99.90000"s);
	EXPECT_EQ(fstd::to_string<5>(9.99)       ,   "9.99000"s);
	EXPECT_EQ(fstd::to_string<5>(0.999)      ,   "0.99900"s);
	EXPECT_EQ(fstd::to_string<5>(0.0999)     ,   "0.09990"s);
	EXPECT_EQ(fstd::to_string<5>(0.00999)    ,   "0.00999"s);
	EXPECT_EQ(fstd::to_string<5>(0.000999)   ,   "0.00100"s);
	EXPECT_EQ(fstd::to_string<5>(999.999)    , "999.99900"s);
	EXPECT_EQ(fstd::to_string<5>(99.9999)    ,  "99.99990"s);
	EXPECT_EQ(fstd::to_string<5>(9.99999)    ,   "9.99999"s);
	EXPECT_EQ(fstd::to_string<5>(0.999999)   ,   "1.00000"s);
	EXPECT_EQ(fstd::to_string<5>(0.0999999)  ,   "0.10000"s);
	EXPECT_EQ(fstd::to_string<5>(0.00999999) ,   "0.01000"s);
	EXPECT_EQ(fstd::to_string<5>(0.000999999),   "0.00100"s);

	EXPECT_EQ(fstd::to_string<5>(-999.0)      , "-999.00000"s);
	EXPECT_EQ(fstd::to_string<5>(-99.9)       ,  "-99.90000"s);
	EXPECT_EQ(fstd::to_string<5>(-9.99)       ,   "-9.99000"s);
	EXPECT_EQ(fstd::to_string<5>(-0.999)      ,   "-0.99900"s);
	EXPECT_EQ(fstd::to_string<5>(-0.0999)     ,   "-0.09990"s);
	EXPECT_EQ(fstd::to_string<5>(-0.00999)    ,   "-0.00999"s);
	EXPECT_EQ(fstd::to_string<5>(-0.000999)   ,   "-0.00100"s);
	EXPECT_EQ(fstd::to_string<5>(-999.999)    , "-999.99900"s);
	EXPECT_EQ(fstd::to_string<5>(-99.9999)    ,  "-99.99990"s);
	EXPECT_EQ(fstd::to_string<5>(-9.99999)    ,   "-9.99999"s);
	EXPECT_EQ(fstd::to_string<5>(-0.999999)   ,   "-1.00000"s);
	EXPECT_EQ(fstd::to_string<5>(-0.0999999)  ,   "-0.10000"s);
	EXPECT_EQ(fstd::to_string<5>(-0.00999999) ,   "-0.01000"s);
	EXPECT_EQ(fstd::to_string<5>(-0.000999999),   "-0.00100"s);

	std::string s;
	s = fstd::to_string<12>(9.999999999999);
	EXPECT_EQ(s, "9.999999999999"s);
	s = fstd::to_string<12>(-9.999999999999);
	EXPECT_EQ(s, "-9.999999999999"s);
	s = fstd::to_string<1>(999999999999.9);
	EXPECT_EQ(s, "999999999999.9"s);
	s = fstd::to_string<1>(-999999999999.9);
	EXPECT_EQ(s, "-999999999999.9"s);
	s = fstd::to_string<12, ff::SATURATE>(9.999999999999999);
	EXPECT_EQ(s,  "10.000000000000"s);
	s = fstd::to_string<12, ff::SATURATE>(-9.999999999999999);
	EXPECT_EQ(s, "-10.000000000000"s);
	s = fstd::to_string<1, ff::SATURATE>(999999999999999.9);
	EXPECT_EQ(s,  "100000000000000.0"s);
	s = fstd::to_string<1, ff::SATURATE>(-999999999999999.9);
	EXPECT_EQ(s, "-100000000000000.0"s);
}


int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
