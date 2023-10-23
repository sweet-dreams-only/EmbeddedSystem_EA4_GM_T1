setlocal

set ECUCFILE=%1
set GENDATADIR=%2
set APPSWCDIR=%3
set SWCNAME=%4

del %GENDATADIR%\%SWCNAME%_Cfg_private.h
del %GENDATADIR%\%SWCNAME%_Cfg_private.c
del %GENDATADIR%\%SWCNAME%_GenErrors.log

rem Cfg_private.h generation
set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\%SWCNAME%_Cfg_private.h.tt -i=..\..\TL105A_Artt\tools\include  -u="http://autosar.org/schema/r4.0"  -o=%GENDATADIR% >>%GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end

rem Cfg_private.c generation
set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\%SWCNAME%_Cfg_private.c.tt -i=..\..\TL105A_Artt\tools\include  -u="http://autosar.org/schema/r4.0"  -o=%GENDATADIR% >>%GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end

:end
exit %ERRORLEVEL%
endlocal
