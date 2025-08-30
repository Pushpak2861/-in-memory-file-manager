#ifndef DIRECTORIES_H
#define DIRECTORIES_H


#include <iostream>
#include <vector>
#include "file.h"


using namespace std;



struct Dir{
    string name;
    Dir* parent_dir;
    vector< Dir*> child_dir;
    vector<files*> files_;
};

#endif 