#ifndef FILE_SYS_H
#define FILE_SYS_H


#include <iostream>
#include "file.h"
#include "directories.h"
#include <vector>

using namespace std;


class file_sys_{
    public:
        Dir* root;
        file_sys_();

        Dir* finder(Dir* curr , string& path);

        void add_dir(string& dir_name , vector<string>& path);

        void add_file();

        void list_dir(Dir* curr);

        void list_file();

        void read_file();
};

#endif 