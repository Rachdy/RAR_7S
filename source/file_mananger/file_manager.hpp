
/*
    =========================================================
    file_mananger responsible for any file/folder operation .
    =========================================================
*/

#ifndef FILE_MANANGER_HPP
#define FILE_MANANGER_HPP

    /*
        TODO : add "return type and arguements" to all functions  
    */
namespace file_mananger{

    void open_file_as_text();
    void open_file_as_binary();
    void open_file();
    void close_file();
    void read_from_file();
    void write_to_file();

    void open_folder();
    void close_folder();

    void get_file_info();
    void get_folder_info();

    // maybe we need those 
    void delete_file();
    void delete_folder();
    
}
// end of namespace file_mananger

#endif