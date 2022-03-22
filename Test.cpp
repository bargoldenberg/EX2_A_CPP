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


TEST_CASE("Good input"){
	Notebook nb;
	/*
	basic write, read and erase horizontaly
	*/
	nb.write(1,1,1,Direction::Horizontal,"a");
	//test1
	CHECK(nb.read(1,1,1,Direction::Horizontal,1)=="a");
	nb.write(1,1,2,Direction::Horizontal,"a");
	//test2
	CHECK(nb.read(1,1,1,Direction::Horizontal,2)=="aa");
	nb.erase(1,1,1,Direction::Horizontal,1);
	//test3
	CHECK(nb.read(1,1,2,Direction::Horizontal,2)=="~a");
	/*
	basic write, read and erase verticaly
	*/
	nb.write(2,1,1,Direction::Vertical,"a");
	//test4
	CHECK(nb.read(2,1,1,Direction::Vertical,3)=="a\n"
												"_\n"
												"_\n");
	nb.erase(2,1,1,Direction::Vertical,1);
	//test5
	CHECK(nb.read(2,1,1,Direction::Vertical,3)=="~\n"
												"_\n"
												"_\n");
	/*
	Advanced read write, and erase horizontaly
	*/
	nb.write(3,1,1,Direction::Horizontal,"Hello, World!!");
	//test6
	CHECK(nb.read(3,1,1,Direction::Horizontal,14)=="Hello, World!!");
	nb.erase(3,1,1,Direction::Horizontal,2);
	//test7
	CHECK(nb.read(3,1,1,Direction::Horizontal,14)=="~~llo, World!!");
	nb.write(3,2,1,Direction::Horizontal,"Good, Luck!");
	/*
	Advanced read write, and erase verticaly
	*/
	//test8
	CHECK(nb.read(3,1,3,Direction::Vertical,3)=="l\n"
												"o\n"
												"_\n");
	nb.write(3,1,15,Direction::Vertical,"This Text is written vertically");
	//test9
	CHECK(nb.read(1,1,1,Direction::Vertical,7)=="T\n"
												"h\n"
												"i\n"
												"s\n"
												" \n"
												"T\n"
												"e\n");
	/*
	Test that i can write more that 100 letters vertically
	*/
	for(int i=1;i<=101;i++){
		CHECK_NOTHROW(nb.write(4,i,1,Direction::Vertical,to_string(i)));
	}

}

TEST_CASE("Bad Input"){
	Notebook nb;
	//test10
	CHECK_THROWS(nb.write(-1,1,1,ariel::Direction::Horizontal,"Hello"));
	//test11
	CHECK_THROWS(nb.write(1,-1,1,Direction::Horizontal,"Hello"));
	//test12
	CHECK_THROWS(nb.write(1,1,-1,Direction::Horizontal,"Hello"));
	//test13
	CHECK_THROWS(nb.write(1,1,1,Direction::Horizontal,"123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101"));
	//test14
	CHECK_THROWS(nb.read(1,1,1,Direction::Horizontal,-1));
	//test15
	CHECK_THROWS(nb.erase(1,1,1,Direction::Vertical,-1));
	nb.write(1,1,1,Direction::Horizontal,"a");
	nb.erase(1,1,1,Direction::Horizontal,1);
	//test16
	CHECK_THROWS(nb.write(1,1,1,Direction::Horizontal,"a"));


}
