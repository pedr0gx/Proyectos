#include "Ram.h"


/*
*****************************
* CREDITOS A PEDRO GONZALEZ *
*****************************
*/

void center()
{
	while (true)
	{
		HWND ConsoleWindow;
		ConsoleWindow = GetForegroundWindow();

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
	system("title Sistema De Rendimiento");
	system("MODE CON: COLS=38 LINES=9");
	system("color 0B");

	printf("\n\n  *********************************\n");
	printf("  *                               *\n");
	printf("  * Iniciando \033[32mSistema\033[0m De Limpieza *\n");
	printf("  *                               *\n");
	printf("  *********************************\n");
	system("PING 127.0.0.1 -n 5 >nul");

	system("cls");
	system("color 0F");
	printf("\n\n  *********************************\n");
	printf("  *                               *\n");
	printf("  *     Liberando Memoria Ram     *\n");
	printf("  *                               *\n");
	printf("  *********************************\n");
	system("PING 127.0.0.1 -n 5 >nul");

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
		system("PING 127.0.0.1 -n 1 >nul");

		if (a != 31)
		{
			system("cls");
		}		
	}
	system("PING 127.0.0.1 -n 3 >nul");

	system("cls");
	system("color 0A");
	printf("\n\n  *********************************\n");
	printf("  *                               *\n");
	printf("  *      Memoria Ram liberada     *\n");
	printf("  *                               *\n");
	printf("  *********************************\n");
	system("PING 127.0.0.1 -n 5 >nul");

	system("cls");
	system("color 0C");
	printf("\n\n  *********************************\n");
	printf("  *                               *\n");
	printf("  * Limpiando Archivos Temporales *\n");
	printf("  *                               *\n");
	printf("  *********************************\n");
	system("PING 127.0.0.1 -n 5 >nul");

	system("ERASE /F /Q /S C:\\Windows\\Temp\\*.* >nul");
	system("ERASE /F /Q /S %temp%\\*.* >nul");
	system("ERASE /F /Q /S C:\\Windows\\Prefetch\\*.* >nul");

	system("cls");
	system("color 0A");
	printf("\n\n  *********************************\n");
	printf("  *                               *\n");
	printf("  * Archivos Temporales Limpiados *\n");
	printf("  *                               *\n");
	printf("  *********************************\n");
	system("PING 127.0.0.1 -n 5 >nul");

	system("cls");
	system("color 0E");
	printf("\n\n  *********************************\n");
	printf("  *          2023-2024            *\n");
	printf("  *   Creditos A Pedro Gonzalez   *\n");
	printf("  *                               *\n");
	printf("  *********************************\n");
	system("PING 127.0.0.1 -n 5 >nul");

	exit(-1);
	ExitProcess(0);
}
/*
*****************************
* CREDITOS A PEDRO GONZALEZ *
*****************************
*/