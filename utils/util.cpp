#include <iostream>
#include "file_sys.h"
#include "directories.h"
#include "file.h"
#include <vector>


using namespace std;

file_sys_::file_sys_()
{
    root = nullptr;
}

Dir* file_sys_::finder(Dir* curr,string& path){

    if(!curr){return nullptr;}

    if(curr->name == path){
        return curr;
    }
    
    
    for(int i=0; i<curr->child_dir.size();i++){
        
        Dir* found = finder(curr->child_dir[i] , path);
        if(found){
            return found;
        }

        }
    return nullptr;
}

void file_sys_::add_dir(string& dir_name , vector<string>& path){

    if(root == nullptr){
        root = new Dir();
        root->name = dir_name;
        root->parent_dir = nullptr;
        return;
    }

    Dir* curr = root;
    string last = path[path.size()-1];
    Dir* found = finder(curr , last);

    
    Dir* child = new Dir();
    child->name = dir_name;
    child->parent_dir = found;

    found->child_dir.push_back(child);

    return;

}

void file_sys_::list_dir(Dir* curr){
    if(!curr){
        return;
    }

    cout<<curr->name<<endl;

    for(int i =0 ; i<curr->child_dir.size();i++){
        list_dir(curr->child_dir[i]);
    }

    return;

}
