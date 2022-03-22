
#include "Direction.hpp"
using ariel::Direction;


#include <iostream>
#include <stdexcept>
using namespace std;
namespace ariel{
    class Notebook{
        public:
            Notebook();
            void write(int page,int row, int column, Direction d, string s);
            string read(int page, int row, int column, Direction d, int length);
            void erase(int page, int row, int column, Direction d, int size);
            void show(int page);
    };

}
