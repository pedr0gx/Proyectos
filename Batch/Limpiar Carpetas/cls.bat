@echo off
for /d %%a in ("C:\\Windows\\Temp\\*.*") do rd /Q /S "%%a" 2>nul
for /d %%a in ("%temp%\\*.*") do rd /Q /S "%%a" 2>nul
for /d %%a in ("C:\\Windows\\Prefetch\\*.*") do rd /Q /S "%%a" 2>nul
pause>nul
exit