#include <iostream>
#include <windows.h>

#define CMD_SHUTDOWN "shutdown -s -f -t 0"

int setTotal(std::string key, int power);

int main(int argc, char const *argv[])
{
    int totalTime = setTotal(argv[1], atol(argv[2]));
    Sleep(totalTime);
    system(CMD_SHUTDOWN);
    
    return 0;
}

int setTotal(std::string key, int power) {
    int totalTime;
    if (key == "-HOUR") {
        int hourTime = 1000 * 3600;
        totalTime = hourTime * power; 
    }

    else if (key == "-MINUTE") {
        int minuteTime = 1000 * 60;
        totalTime = minuteTime * power;
    }
    
    else if (key == "-SECOND") {
        int secondTime = 1000;
        totalTime = secondTime * power;
    }

    else if (key == "-MILLISECOND") {
        totalTime = power;
    }

    else {
        totalTime = power;
    }
    return totalTime;
}
