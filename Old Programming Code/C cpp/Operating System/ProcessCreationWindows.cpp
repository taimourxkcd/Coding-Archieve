#include<iostream>
#include<Windows.h>


int main() {

	//local variable
	HANDLE hProcess = 0;	 //handle for the process
	HANDLE hThread = 0;	 //handle for the thread
	STARTUPINFO si;		 // startInfo structure
	PROCESS_INFORMATION pi;  //startInfo Structure
	DWORD dwProcessId = 0;
	DWORD dwThreadId = 0;
	BOOL bProcess;

//step 1: filling the memory block of startupINFO and 
process_INFORMATION structure with zero
	ZeroMemory(&si, sizeof(si));
	ZeroMemory(&pi, sizeof(pi));
	//step 2: create the process
	bProcess = CreateProcess(
		L"C:\\dev\\newproject\\Debug\\newproject.exe",
		NULL, // command line argument
		NULL, //process attribute
		NULL, // thread attribute
		FALSE, // Inherit attribute
		0,		// creation flag
		NULL,	//environment variable
		NULL,	//current directory
		&si,	//startinfo
		&pi);  //process info


	if (bProcess == FALSE) {
		std::cout << "create process failed and error no  -" << GetLastError() << std::endl;
	}
	std::cout << "create process success" << std::endl;

	//step 4: printing the process id and thread id
	std::cout << "Process id -> " << pi.dwProcessId << std::endl;
	std::cout << "Thread id -> " << pi.dwThreadId << std::endl;

	//step 5: WaitForSignalObject
	WaitForSingleObject(pi.hProcess, INFINITE);
	std::cout << "GetProcessId -> " << GetProcessId(pi.hThread) << std::endl;

	//step 6: close handle of primary process and primary thread
	CloseHandle(pi.hThread);
	CloseHandle(pi.hProcess);

	system("pause");
	return 0;


}
Code that is being executed inside the child process
#include<iostream>
#include<Windows.h>


class Sample {
public:
	Sample() {
		std::cout << "Constructor is being called in the child process" << std::endl;
	}

	~Sample() {
		std::cout << " Destructor is being called in the child process" << std::endl;
	}
};



int main() {

	Sample s;

	system("PAUSE");
	return 0;
}



