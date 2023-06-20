@echo off
MODE CON: COLS=38 LINES=9
color 0B
for /d %%a in ("C:\\Windows\\Temp\\*.*") do rd /Q /S "%%a" >NUL
for /d %%a in ("%temp%\\*.*") do rd /Q /S "%%a" >NUL
for /d %%a in ("C:\\Windows\\prefetch\\*.*") do rd /Q /S "%%a" >NUL
exit