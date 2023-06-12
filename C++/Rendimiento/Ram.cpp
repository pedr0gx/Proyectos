#include "Ram.h"

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
	printf("  * Iniciando Sistema De Limpieza *\n");
	printf("  *                               *\n");
	printf("  *********************************\n");
	system("PING 127.0.0.1 -n 5 >nul");
	system("cls");
	system("color 0F");

	for (int i = 0; i <= 100; i++)
	{
		system("cls");
		
		if (i == 100)
		{
			printf("\n\n  *********************************\n");
			printf("  *                               *\n");
			printf("  *  Liberando Memoria Ram: %d%%  *\n", i);
			printf("  *                               *\n");
			printf("  *********************************\n");

			system("start ram.vbe");
			system("start ram.vbe");
			system("PING 127.0.0.1 -n 5 >nul");
			goto continuar;
		}

		if (i < 10)
		{
			printf("\n\n  *********************************\n");
			printf("  *                               *\n");
			printf("  *  Liberando Memoria Ram: %d%%    *\n", i);
			printf("  *                               *\n");
			printf("  *********************************\n");

			system("start ram.vbe");
			system("start ram.vbe");
			system("PING 127.0.0.1 -n 1 >nul");
		}
		else if(i > 10 && i < 100)
		{
			printf("\n\n  *********************************\n");
			printf("  *                               *\n");
			printf("  *  Liberando Memoria Ram: %d%%   *\n", i);
			printf("  *                               *\n");
			printf("  *********************************\n");

			system("start ram.vbe");
			system("start ram.vbe");
			system("PING 127.0.0.1 -n 1 >nul");
		}	
	}
	continuar:
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
	system("pause>nul");
	system("start cls.bat");

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