//
//  Species.cpp
//
//
//  Created by Will Darden on 1/22/17.
//
//


#include "Species.hpp"

//std libraries
// #include <stdlib.h>
#include<string>
// #include<vector>

using namespace std;

string Species::getName(){
    return name;
}

// string toString(string style){
//     switch(style){
//         case("basic"): return "Name: " + name + " Weight: " + weight + " Drift: " + drift;
//         case("full"):
//         string description = this->toString("basic") + "\n";
//         for(Gene* gene:genes){
//             description += "\t" + gene->toString() + "\n";
//         }
//         return description;
//     }
// }
