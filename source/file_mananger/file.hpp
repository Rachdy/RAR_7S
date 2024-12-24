
#pragma once 

#ifndef FILE_HPP
#define FILE_HPP

#include <stdio.h>
#include <string>

class file {
    private : 
        bool is_open = false;
        
    public : 
        std::string name   = "";
        std::string format = ""; // file type

        size_t size = 0;
        bool  open_as_binary = false;

        FILE* handle = nullptr;  
        void* data   = nullptr;

        // constructor's
        file();
        file(std::string& file_name);
        file(std::string& file_name , FILE* file_handle);
        
        // destructor's
        ~file();

};
// end of class file 

#endif