
#ifndef FILE_MANANGER_CPP
#define FILE_MANANGER_CPP

#include "file_manager.hpp"
#include <fstream>
#include <vector>

namespace file_mananger{
    std::fstream myobj;
    std::vector<std::fstream> current_opened_files;
    void open_file(std::string file_name){
        myobj.open(file_name, std::ios::in);
    }

    void open_file_as_binary(std::string file_name){
        myobj.open(file_name, std::ios::binary);
    }

    void close_file(std:: string file_name){

    }





}
// end of namespace file_mananger

#endif
