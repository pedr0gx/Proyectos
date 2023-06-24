@echo off

title Change Extensions
MODE CON COLS=40 LINES=18
:volver
cls
echo.
echo.
echo       ***************************
echo       *                         *
echo       *    Change Extensions    *
echo       * For Pedro Gonzalez 2023 *  
echo       *                         *
echo       ***************************
echo.

set/p ext1= Ext Current: 
set/p ext2= Ext New: 

ren *.%ext1% *.%ext2%

echo.
echo.
echo  -- extensions changed successfully --
echo      --- Enter for new change ---
pause>nul
goto volver