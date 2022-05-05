#include <iostream>

#define print(x) std::cout<<x
#define endline std::cout<<std::endl

int main(int argc, char const *argv[])
{
    std::string command, time, log;
    endline;
    print("Please enter command: ");
    std::cin>>command;
    endline;
    print("Please enter time: ");
    std::cin>>time;
    endline;
    print("Please enter log: ");
    std::cin>>log;
    endline;
    std::string systemCommand;
    systemCommand = "sleeper "+command+" "+time+" "+log;
    system(systemCommand.c_str());
    return 0;
}
