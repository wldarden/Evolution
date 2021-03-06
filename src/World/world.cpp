//
//  World.cpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

// #include "stdlib.h"
#include "World.hpp"
#include "../Globals.hpp"
//std libraries
#include<string>
#include<list>

using namespace std;

string World::getName(){
    return name;
}

void World::update(){
    for(Biome* b:biomes){
        b->update();
    }
}

//INFO

list<string> World::getSpecies(){
    list<string> list;
    for(Species* s:species){
        list.push_back(s->getName());
    }
    return list;
}

list<string> World::getBiomes(){
    list<string> list;
    for(Biome* b:biomes){
        list.push_back(b->getName());
    }
    return list;
}

string World::toString(int style){
    switch(style){
    case(LESS): return "Name: " + name + " # of Species: " + to_string(species.size());
    }
}
