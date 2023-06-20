#include "Ram.h"


/*
*****************************
* CREDITOS A PEDRO GONZALEZ *
*****************************
*/

void center()
{
	HWND hWnd = GetConsoleWindow();

	LONG lStyle = GetWindowLong(hWnd, GWL_STYLE);
	lStyle &= ~WS_BORDER;
	SetWindowLong(hWnd, GWL_STYLE, lStyle);

	SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), 0);

	for(int a=0; a<=1; a++)
	{
		SetWindowText(hWnd, L"Sistema De Rendimiento");
		
		HWND ConsoleWindow = GetForegroundWindow();

		int width = GetSystemMetrics(SM_CXSCREEN);
		int height = GetSystemMetrics(SM_CYSCREEN);

		int centerX = width / 2.5;
		int centerY = height / 2.5;

		SetWindowPos(ConsoleWindow, HWND_TOP, centerX, centerY, 0, 0, SWP_NOSIZE);
		Sleep(3000);
    }
}

void main()
{
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)center, 0, 0, 0);
	system("MODE CON: COLS=38 LINES=9");
	system("color 0E");

	printf("\n\n  *********************************\n");
	printf("  *                               *\n");
	printf("  * \033[36mIniciando Sistema De Limpieza\033[0m *\n");
	printf("  *                               *\n");
	printf("  *********************************\n");
	Sleep(5000);

	system("cls");
	system("color 0F");
	printf("\n\n  *********************************\n");
	printf("  *                               *\n");
	printf("  *     \033[36mLiberando Memoria Ram\033[0m     *\n");
	printf("  *                               *\n");
	printf("  *********************************\n");
	Sleep(5000);

	system("cls");
	system("color 0E"); 
	
	for (int a = 0; a <= 31; a++)
	{
		printf("\n  *********************************\n"); 
		printf("  *  -  \033[35mLiberando Memoria Ram\033[0m  -  *");
		printf("\n  *********************************\n");
		for (int b = 0; b <= a; b++)
		{
			if (b < 1)
			{
				printf("  *\033[32m/\033[0m");				
			}
			else if (b == 31)
			{
				printf("\033[32m/\033[0m*");
			}
			else if (b != 30)
			{
				printf("\033[32m/\033[0m");
			}
		}

		for (int b = 0; b <= a; b++)
		{
			if (b < 1)
			{
				printf("\n  *\033[32m/\033[0m");
			}
			else if (b == 31)
			{
				printf("\033[32m/\033[0m*");
			}
			else if (b != 30)
			{
				printf("\033[32m/\033[0m");
			}
		}

		for (int b = 0; b <= a; b++)
		{
			if (b < 1)
			{
				printf("\n  *\033[32m/\033[0m");
			}
			else if (b == 31)
			{
				printf("\033[32m/\033[0m*");
			}
			else if (b != 30)
			{
				printf("\033[32m/\033[0m");
			}
		}
		printf("\n  *********************************\n");
		system("start ram.vbe");
		system("start ram.vbe");
		system("start ram.vbe");
		system("start ram.vbe");
		system("start ram.vbe");
		Sleep(1000);

		if (a != 31)
		{
			system("cls");
		}		
	}
	
	Sleep(3000);

	system("cls");
	system("color 0E");
	printf("\n\n  *********************************\n");
	printf("  *                               *\n");
	printf("  *      \033[32mMemoria Ram liberada\033[0m     *\n");
	printf("  *                               *\n");
	printf("  *********************************\n");
	Sleep(5000);

	system("cls");
	system("color 0E");
	printf("\n\n  *********************************\n");
	printf("  *                               *\n");
	printf("  * \033[36mLimpiando Archivos Temporales\033[0m *\n");
	printf("  *                               *\n");
	printf("  *********************************\n");
	Sleep(5000);

	string home_dir = getenv("USERPROFILE");

	char Direcc[255] = "\\AppData\\Local\\Temp";
	home_dir += Direcc;

	string directoryName1 = "C:\\Windows\\Temp";
	string directoryName2 = "C:\\Windows\\Prefetch";
	string directoryName3 = home_dir;

	DIR* dir1 = opendir(directoryName1.c_str());
	DIR* dir2 = opendir(directoryName2.c_str());
	DIR* dir3 = opendir(directoryName3.c_str());

	if (dir1 == NULL) {
		system("cls");
		system("color 0F");
		printf("\n\n  *********************************\n");
		printf("  *                               *\n");
		printf("  * \033[36mError Al Abrir El Directorio1\033[0m *\n");
		printf("  *                               *\n");
		printf("  *********************************\n");
		Sleep(5000);
		exit(-1);
		ExitProcess(0);
	}
	else if (dir2 == NULL) {
		system("cls");
		system("color 0F");
		printf("\n\n  *********************************\n");
		printf("  *                               *\n");
		printf("  * \033[36mError Al Abrir El Directorio2\033[0m *\n");
		printf("  *                               *\n");
		printf("  *********************************\n");
		Sleep(5000);
		exit(-1);
		ExitProcess(0);
	}
	else if (dir3 == NULL) {
		system("cls");
		system("color 0F");
		printf("\n\n  *********************************\n");
		printf("  *                               *\n");
		printf("  * \033[36mError Al Abrir El Directorio3\033[0m *\n");
		printf("  *                               *\n");
		printf("  *********************************\n");
		Sleep(5000);
		exit(-1);
		ExitProcess(0);
	}
	struct dirent* entry;

	while ((entry = readdir(dir1)) != NULL) {
		string fileName = entry->d_name;
		if (entry->d_type != DT_DIR) {
			string fullPath = directoryName1 + "/" + fileName;
			remove(fullPath.c_str());
		}
	}

	while ((entry = readdir(dir2)) != NULL) {
		string fileName = entry->d_name;
		if (entry->d_type != DT_DIR) {
			string fullPath = directoryName2 + "/" + fileName;
			remove(fullPath.c_str());
		}
	}
	
	while ((entry = readdir(dir3)) != NULL) {
		string fileName = entry->d_name;
		if (entry->d_type != DT_DIR) {
			string fullPath = directoryName3 + "/" + fileName;
			remove(fullPath.c_str());
		}
	}

	system("start cls.bat");

	system("cls");
	system("color 0E");
	printf("\n\n  *********************************\n");
	printf("  *                               *\n");
	printf("  * \033[32mArchivos Temporales Limpiados\033[0m *\n");
	printf("  *                               *\n");
	printf("  *********************************\n");
	Sleep(5000);

	system("cls");
	system("color 0E");
	printf("\n\n  *********************************\n");
	printf("  *          \033[1;34m2019-2024\033[0m            *\n");
	printf("  *   \033[1;34mCreditos A Pedro Gonzalez\033[0m   *\n");
	printf("  *///////////////////////////////*\n");
	printf("  *********************************\n");
	Sleep(5000);

	exit(-1);
	ExitProcess(0);
}
/*
*****************************
* CREDITOS A PEDRO GONZALEZ *
*****************************
*/