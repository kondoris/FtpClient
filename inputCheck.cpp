#include "InputException.h"
#include "Exception.h"
#include <iostream>

using namespace std;

class inputError : public Exception {
	enum consoleAction { null, null, pwd, lcd, cd, ls, dir, mkdir, rmdir, get, mget, put, mput, null, rename, bye };
public:

	void  errorText(int numb) {
		if (numb == 17)
			cout << "Maybe you wanted to type - pwd?" << endl;
		if (numb == 18)
			cout << "Maybe you wanted to type - lcd?" << endl;
		if (numb == 19)
			cout << "Maybe you wanted to type - cd?" << endl;
		if (numb == 20)
			cout << "Maybe you wanted to type - dir?" << endl;
		if (numb == 21)
			cout << "Maybe you wanted to type - mkdir?" << endl;
		if (numb == 22)
			cout << "Maybe you wanted to type - rmdir" << endl;
		if (numb == 23)
			cout << "Maybe you wanted to type - get?" << endl;
	}

	int inputCheck(string msg) {
		int errorMsg = 0;
		if (msg == "!")						return 1;
		if (msg == "?")						return 2;
		if (msg == "pwd")					return 3;
		if (msg == "lcd")					return 4;
		if (msg == "cd")					return 5;
		if (msg == "ls")					return 6;
		if (msg == "dir")					return 7;
		if (msg == "mkdir")					return 8;
		if (msg == "rmdir")					return 9;
		if (msg == "get")					return 10;
		if (msg == "mget")					return 11;
		if (msg == "put" || msg == "send")	return 12;
		if (msg == "mput")					return 13;
		if (msg == "delete")				return 14;
		if (msg == "rename")				return 15;
		if (msg == "bye")					return 16;
		if (msg[0] == 'p')					errorMsg = 17;
		if (msg[0] == 'l')					errorMsg = 18;
		if (msg[0] == 'c')					errorMsg = 19;
		if (msg[0] == 'd')					errorMsg = 20;
		if (msg[0] == 'm')					errorMsg = 21;
		if (msg[0] == 'r')					errorMsg = 22;
		if (msg[0] == 'g')					errorMsg = 23;
		errorText(errorMsg);
		return -1;
	}
};
