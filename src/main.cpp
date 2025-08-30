#include <iostream>
#include "../utils/directories.h"
#include "../utils/file.h"
#include "../utils/file_sys.h"
#include <vector>

using namespace std;

int main(){
    file_sys_ fs;
    string dir_name = "root";
    
    vector<string> st;
    st.push_back("root"); 
    fs.add_dir( dir_name, st);
    dir_name = "love";
    fs.add_dir(dir_name, st);
    Dir* curr = fs.root;
    fs.list_dir(curr);
}