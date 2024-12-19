
/*
    =========================================================
    file_mananger responsible for any file/folder operation .
    =========================================================
*/

#ifndef FILE_MANANGER_HPP
#define FILE_MANANGER_HPP

#include <string>
#include<fstream>
#include <unordered_map>

    /*
        TODO : add "return type and arguements" to all functions
    */
namespace file_mananger{

    void open_file_as_text(const std::string file_path);
    void open_file_as_binary(const std::string file_path);
    void open_file(const std::string file_path);
    void close_file(const std:: string file_path);
    void read_from_file(const std::string file_path);
    void write_to_file(const std::string file_path);

    void open_folder(const std::string folder_path);
    void close_folder(const std::string folder_path);

    void get_file_info(const std::string file_path);
    void get_folder_info(const std::string file_path);

    // maybe we need those
    void delete_file();
    void delete_folder();

}
// end of namespace file_mananger

#endif
