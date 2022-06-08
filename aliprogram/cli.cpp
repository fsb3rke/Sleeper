#include <iostream>

class cli
{
private:
    std::string commands[4] = {"-HOUR", "-MINUTE", "-SECOND", "-MILLISECOND"};
public:
    std::string get();
    std::string get(int index);
} cli;

int main(int argc, char const *argv[])
{
    int commandInput;
    int powerInput;

    std::cout<<"COMMANDS: "<<std::endl;
    std::cout<<cli.get()<<std::endl;

    std::cout<<"Please enter command index: ";
    std::cin>>commandInput;

    std::cout<<std::endl;
    
    std::cout<<"Please enter power: ";
    std::cin>>powerInput;
    
    std::string command = cli.get(commandInput);
    std::string systemCommand = "main " + command + " " + std::to_string(powerInput);
    system(systemCommand.c_str());
    return 0;
}

std::string cli::get() {
    std::string rValue;
    for (int i = 0; i < sizeof(commands) / sizeof(commands[0]); i++) {
        rValue += "[" + std::to_string(i) + "] : " + commands[i] + "\n";
    }
    return rValue;
}

std::string cli::get(int index) {
    return commands[index];
}
