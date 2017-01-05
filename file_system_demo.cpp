#include <iostream>
#include "filesystem.h"
#include <stdlib.h>

int main(int argc , char** argv){

    // We need a directory to test that.
    if(argc <= 1){

        std::cerr << "Usage :directory.\n";
        exit(1);
    }
    FileSystem file_system(argv[1]);

    std::vector<std::string> files; 
    file_system.get_files(files);

    for( auto file : files ){
        std::cout << file << "\n";
    }


    return 0;
}
