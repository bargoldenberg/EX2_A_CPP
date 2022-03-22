#include "Notebook.hpp"
#include "Direction.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>
#include <map>
using ariel::Direction;
using namespace ariel;
using namespace std;

Notebook::Notebook(){
    map<map<vector<int>,int>, int> m;
}
void Notebook::write(int page,int row, int column, Direction d, string s){
}

string Notebook::read(int page, int row, int column, Direction d, int length){
    return "a";
}
void Notebook::erase(int page, int row, int column, Direction d, int length){

}

void Notebook::show(int page){

}