@echo off
for /d %%a in ("C:\\Windows\\Temp\\*.*") do rd /Q /S "%%a" >nul
for /d %%a in ("%temp%\\*.*") do rd /Q /S "%%a" >nul
for /d %%a in ("C:\\Windows\\Prefetch\\*.*") do rd /Q /S "%%a" >nul
exit