#include <iostream>
#include <console.h>

int main() {
    //system("chcp 65001");
    std::string command_name;
    std::string command_arg;
    if (starting > 0){} else {std::cout << "Welcome to the Usual Command Line!"<< std::endl<< "Enter help * for information on commands"<<std::endl;}
    std::cin >> command_name >> command_arg;
    int command;
    if (command_name == "exit"){
        command = 1;
    } else if (command_name == "help"){
        command = 2;
    } else if (command_name == "make"){
        command = 3;
    } else if (command_name == "write"){
        command = 4;
    } else if (command_name == "read"){
        command = 5;
    } else if (command_name == "delete"){
        command = 6;
    } else if (command_name == "start"){
        command = 7;
    }
    switch (command) {
        case (1):
            exit();
            starting = 1;
            main();
            break;
        case (2):
            help(command_arg);
            starting = 1;
            main();
            break;
        case (3):
            make(command_arg);
            starting = 1;
            main();
            break;
        case (4):
            write(command_arg);
            starting = 1;
            main();
            break;
        case (5):
            read(command_arg);
            starting = 1;
            main();
            break;
        case (6):
            del(command_arg);
            starting = 1;
            main();
            break;
        case (7):
            start(command_arg);
            starting = 1;
            main();
            break;
    }
};

