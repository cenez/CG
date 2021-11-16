REM How to Use this bat file 
REM Follow step by step below
:: Install or Download MingGW and save it in a specific folder
:: Download Freeglut and config it below
::   -copy include and bin folder into MinGW
::   -go to "bin folder" and copy freeglut.dll in to System32 and SysWOW64
:: Extract the bat.(zip) and copy it into your folder
:: set your project name like this "main.c"
:: Run This.bat 
:: Done


REM
echo "Running \m"
::g++ -o main.exe data.h colors.h main.cpp -I\"C:\usr\OpenGL\local\include" -L\"C:\usr\OpenGL\local\lib -lopengl32 -lglu32 -lfreeglut
g++ -o main.exe data.h colors.h main.cpp -I\"C:\usr\Strawberry\c\include" -L\"C:\usr\Strawberry\c\lib -lopengl32 -lglu32 -lfreeglut
echo "App Running"
main.exe