@Echo Off
setlocal

for %%* in (../.) do set SWC=%%~n*

for /D %%G in ("..\..\*_EPS_*") do set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%

echo Deleting Old Directory
rmdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\%SWC% /s /q
rmdir %INTPJTDIR%\tools\SIP\BSWMD\%SWC% /s /q
echo Copying New Directory
mkdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\%SWC%
mkdir %INTPJTDIR%\tools\SIP\BSWMD\%SWC%
xcopy ..\tools\IntegrationCopy\Configurator	%INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\%SWC% /s
xcopy ..\autosar\NxtrSwIds_bswmd.arxml	%INTPJTDIR%\tools\SIP\BSWMD\%SWC% /s
pause
:end

endlocal

