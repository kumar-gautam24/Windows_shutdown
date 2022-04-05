

#include <iostream>
using namespace std;

int main()
{
	cout << "1: Shutdown\n2: Restart\n3: Log off\n";
	int choice;
	cin >> choice;
	
	
	if (choice == 1)
	{
		system("c:\\windows\\system32\\shutdown /s/t 0");
	}
	else if(choice==2)
		system("c:\\windows\\system32\\shutdown /r/t 0");
	else if(choice==3)
		system("c:\\windows\\system32\\shutdown /l/t 0");
	cout << " C++ is Love ! BYE BYE ";
}
