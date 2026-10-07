#include <iostream>
#include "fileIndexer\fileIndexer.h"

std::string bashCommand;
std::string commas = "\'";

int main() {

    folderPathVerification(folderPath);
    /*for (int i{0}; i < numberOfVideos; i++){
    //std:: cout << '\"' + videos[0].string() + '\"' ;
    bashCommand = "\"C:\\Users\\Alarii\\Documents\\Video Splitter\\video-splitter\" -s 1200 " + commas + videos[0].string() + commas;
    std::cout << bashCommand << std::endl;
    //system(bashCommand.c_str());
    }*/

    for (int i = 0; i < numberOfVideos; i++) {
        std::string bashCommand =
            "C:\\Users\\Alarii\\Documents\\Video_Splitter\\video-splitter.exe -s 1200 \""
            + videos[i].string() + "\" ";

        std::cout << "_________________\n" <<bashCommand << "--------------------------\n";

        system(bashCommand.c_str());
        //std::cout << fileNames[i];
    }
    
    return 0;
}