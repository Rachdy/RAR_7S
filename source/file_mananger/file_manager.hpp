
/*
    =========================================================
    file_mananger responsible for any file/folder operation .
    =========================================================
*/

#ifndef FILE_MANANGER_HPP
#define FILE_MANANGER_HPP

#include "file.hpp"
#include <vector>
#include <string>

//   RCODE ===> return code 
enum RCODE : int16_t{ 

    /*
        few "file mananger" functions use this RCODES 
        as "success code" or "failure code"     
    */
    OPEN_FILE_FAIL,
    OPEN_FILE_SUCCESS,
    OPEN_FOLDER_FAIL,
    OPEN_FOLDER_SUCCESS,
    
    READ_FROM_FILE_FAIL,
    READ_FROM_FILE_SUCCESS,
    WRITE_TO_FILE_FAIL,
    WRITE_TO_FILE_SUCCESS,

    GET_FILE_INFO_FAIL,
    GET_FILE_INFO_SUCCESS,
    GET_FOLDER_INFO_FAIL,
    GET_FOLDER_INFO_SUCCESS,
    
    DELETE_FILE_FAIL,
    DELETE_FILE_SUCCESS,
    DELETE_FOLDER_FAIL,
    DELETE_FOLDER_SUCCESS,
    
    INVALID_FILE_HANDLE,
}; 

/*
    TODO : add "return type and arguements" to all functions
*/
namespace file_mananger{

    file* open_file(const std::string& file_path , bool open_as_binary = false);
    RCODE close_file(file* file_object);
    
    void* read_from_file(file* file_object , uint32_t start_index , uint32_t end_index);
    RCODE write_to_file(file* file_object , void* data , uint32_t data_size);

    void get_file_info(const std::string& file_path);
    void get_folder_info(const std::string& folder_path);

    // maybe we need this
    void delete_file(file* file_object);

    /*
        TODO : add folder class for "folder objects"
    */
    void open_folder();
    void close_folder();
    void delete_folder(); // neeed folder object 

}
// end of namespace file_mananger

#endif
