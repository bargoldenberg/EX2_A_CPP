
#include "Direction.hpp"
using ariel::Direction;

#include <map>
#include <vector>
#include <iostream>
#include <stdexcept>
using namespace std;
namespace ariel{
    class Notebook{
        private:
            map<map<vector<int>,int>, int> m;
        public:
            Notebook();
            void write(int page, int row, int column, Direction d, string s);
            string read(int page, int row, int column, Direction d, int size);
            void erase(int page, int row, int column, Direction d, int size);
            void show(int page);
    };

}
