#include <iostream>
#include <windows.h>
#include <bits/stdc++.h>

#define NULLSTR ""

int main(int argc, char const *argv[])
{
	std::string command, log;
	int time;

	try { command = argv[1]; } 	  catch(const std::exception& e) { std::cerr << "Command error" << std::endl; } 
	try { time = atoi(argv[2]); } catch(const std::exception& e) { std::cerr << "Time error" << std::endl; } 
	try { log = argv[3]; } 	  	  catch(const std::exception& e) { /* pass */ } 

	const std::string PREFIX = "-";
	const std::string COMMANDS[4] = {PREFIX + "s", PREFIX + "ms", PREFIX + "h", PREFIX + "m"};
	
	int sleepParamater, divide;
	const int TIMESECOND = (int)time * 1000;

	if (command == COMMANDS[0]) {
		sleepParamater = TIMESECOND;
		divide = 1000;
	}
	else if (command == COMMANDS[1]) {
		sleepParamater = time;
	}
	else if (command == COMMANDS[2]) {
		sleepParamater = TIMESECOND * 3600;
		divide = 3600;
	}
	else if (command == COMMANDS[3]) {
		sleepParamater = TIMESECOND * 60;
		divide = 60;
	}
	else {
		std::cout << "Invalid command name!" << std::endl;
	}

	bool oneTimeZero = true;

	if (log == PREFIX + "t") {
		for (int i = 0; i < sleepParamater / divide; i++) {
			int number = i + 1;
			if (i == 0) {
				std::cout << number << " ";
				oneTimeZero = false;
			}
			if (i % 9 == 0) {
				if (oneTimeZero) {
					std::cout << number << std::endl;
				}
			}
			else {
				std::cout << number << " ";
				oneTimeZero = true;
			}
			Sleep(1 * 1000);
		}
	}
	else if (log == PREFIX + "f") {
		Sleep(sleepParamater);
	}

	return 0;
}
