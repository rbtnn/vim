@echo off

setlocal ENABLEDELAYEDEXPANSION

call "C:\Program Files\Microsoft SDKs\Windows\v7.1\Bin\SetEnv.cmd" /x86 /release
set INCLUDE=%INCLUDE%C:\Program Files (x86)\Windows Kits\8.1\Include\um

cd %APPVEYOR_BUILD_FOLDER%
cd src
    sed -e "s/\$(LINKARGS2)/\$(LINKARGS2) | sed -e 's#.*\\\\r.*##'/" Make_mvc.mak > Make_mvc2.mak
    nmake -f Make_mvc2.mak DIRECTX=yes CPU=i386 CHANNEL=yes OLE=no GUI=yes IME=yes MBYTE=yes ICONV=yes DEBUG=no PYTHON_VER=27 DYNAMIC_PYTHON=yes PYTHON=C:\Python27 PYTHON3_VER=35 DYNAMIC_PYTHON3=yes PYTHON3=C:\Python35 FEATURES=%FEATURE% || exit 1
    nmake -f Make_mvc2.mak DIRECTX=yes CPU=i386 CHANNEL=yes OLE=no GUI=no  IME=yes MBYTE=yes ICONV=yes DEBUG=no PYTHON_VER=27 DYNAMIC_PYTHON=yes PYTHON=C:\Python27 PYTHON3_VER=35 DYNAMIC_PYTHON3=yes PYTHON3=C:\Python35 FEATURES=%FEATURE% || exit 1
    move /Y .\gvim.exe .\gvim-x86.exe
    move /Y .\vim.exe .\vim-x86.exe
cd ..

call "C:\Program Files\Microsoft SDKs\Windows\v7.1\Bin\SetEnv.cmd" /x64 /release
set INCLUDE=%INCLUDE%C:\Program Files (x86)\Windows Kits\8.1\Include\um

cd %APPVEYOR_BUILD_FOLDER%
cd src
    sed -e "s/\$(LINKARGS2)/\$(LINKARGS2) | sed -e 's#.*\\\\r.*##'/" Make_mvc.mak > Make_mvc2.mak
    nmake -f Make_mvc2.mak DIRECTX=yes CPU=AMD64 CHANNEL=yes OLE=no GUI=yes IME=yes MBYTE=yes ICONV=yes DEBUG=no PYTHON_VER=27 DYNAMIC_PYTHON=yes PYTHON=C:\Python27-x64 PYTHON3_VER=35 DYNAMIC_PYTHON3=yes PYTHON3=C:\Python35-x64 FEATURES=%FEATURE% || exit 1
    nmake -f Make_mvc2.mak DIRECTX=yes CPU=AMD64 CHANNEL=yes OLE=no GUI=no  IME=yes MBYTE=yes ICONV=yes DEBUG=no PYTHON_VER=27 DYNAMIC_PYTHON=yes PYTHON=C:\Python27-x64 PYTHON3_VER=35 DYNAMIC_PYTHON3=yes PYTHON3=C:\Python35-x64 FEATURES=%FEATURE% || exit 1
    move /Y .\gvim.exe .\gvim-x64.exe
    move /Y .\vim.exe .\vim-x64.exe
cd ..

cd %APPVEYOR_BUILD_FOLDER%
cd src
    "C:\Program Files\7-Zip\7z.exe" a tabsidebar-vim-binaries.zip vim-x64.exe vim-x86.exe gvim-x64.exe gvim-x86.exe
cd ..

