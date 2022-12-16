#ifndef CONSOLE   /* Include guard */
#define CONSOLE
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
bool starting = 0;
int help(std::string command_arg){
    if (command_arg == "*"){
        std::cout << "All commands:" << std::endl << "Make - Creating a file" << std::endl << "Read - Read a file" << std::endl  << "Write - Write smth on a file"<< std::endl  << "Delete - Delete File" << std::endl  << "Start - Starting executable" << std::endl  << "Exit - Exit from Command-line" << std::endl;
    }
};
int write(std::string command_arg){
    char text[256];
    std::fstream of (command_arg, std::ios::app);
    if (of.fail()) {
        std::cout << "File does not exist. Creating." << std::endl;
    } else {
        std::cin.ignore();
        std::cin.getline(text, 256);
        of << text << std::endl;
        std::cout << "Done!" << std::endl;
        of.close();
    }
};
int read(std::string command_arg){
    std::string text;
    std::ifstream of (command_arg, std::ios::app);
    if (of.fail()) {
        std::cout << "File does not exist. Creating." << std::endl;
    } else {
        while (getline(of, text))
        {
            std::cout << text << std::endl;
            of.close();
        }
    }
}
int del(std::string command_arg){
    remove(command_arg.c_str());
    std::cout << "File "+command_arg+" Deleted!" << std::endl;
}
int make(std::string command_arg){
    std::ofstream MyFile(command_arg);
    MyFile.close();
    std::cout << "File "+command_arg+" done"<< std::endl;
}
int start(std::string command_arg){
    system(command_arg.c_str());
}
int exit(){
    std::cout << "See ya!" << std::endl;
    Sleep(2000);
};



#endif