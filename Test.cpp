/**
 *
 * AUTHORS: <BAR GOLDENBERG 209894286>
 * 
 * Date: 2021-03
 * 
 */


#include "doctest.h"
#include "Notebook.hpp"
#include "Direction.hpp"
using ariel::Direction;
using namespace ariel;
#include <algorithm>
#include <iostream>
#include <stdexcept>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

/**
 * @brief For some reason the code wont work when i write it nice, it only works when everything is in one line.
 * 
 */
TEST_CASE("Good input"){
	Notebook nb;
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,2,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,2)=="aa");
	nb.erase(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,2,Direction::Horizontal,2)=="_a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,1,Direction::Horizontal,"a");
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");

}
// TEST_CASE("Good input") {
// 	/* good test 1*/	
//     CHECK(nospaces(mat(9, 7, '@', '-')) == nospaces("@@@@@@@@@\n"
// 													"@-------@\n"
// 													"@-@@@@@-@\n"
// 													"@-@---@-@\n"
// 													"@-@@@@@-@\n"
// 													"@-------@\n"
// 													"@@@@@@@@@"));

// }

// TEST_CASE("Bad input") {
// 	/*ONE OR TWO OF THE ARGUMENTS ARE EVEN*/
// 	/*------------------------------------*/
// 	/*test 1*/
//     CHECK_THROWS(mat(10, 5, '$', '%'));
//     /*test 2*/
//     CHECK_THROWS(mat(0, 5, '$', '*'));
// 	/*test 3*/
//     CHECK_THROWS(mat(12, 3, '$', '$'));
// 	/*test 4*/
// 	CHECK_THROWS(mat(15, 4, '@', '@'));
// 	/*ONE OR TWO OF THE ARGUMENTS ARE NEGATIVE*/
// 	/*------------------------------------*/
// 	/*test 5*/
//     CHECK_THROWS(mat(-10, 5, '(', ')'));
// 	/*test 6*/
//     CHECK_THROWS(mat(-3, 5, '_', '-'));
// 	/*test 7*/
// 	CHECK_THROWS(mat(-3, -5, '!', '@'));
// 	/*test 8*/
// 	CHECK_THROWS(mat(-7, -5, '!', '@'));
// }