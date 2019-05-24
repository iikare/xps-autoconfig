#include <cstdlib>
#include <conio.h>
#include <ctype.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){

	if(system("taskkill /F /T /IM ThrottleStop.exe")){
		cout << "Error: Could not terminate ThrottleStop.\n";
	}

	_getch();

	return 0;
}