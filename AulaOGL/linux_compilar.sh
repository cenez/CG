#!/bin/sh
g++ -pthread -o a data.h colors.h main.cpp -lglfw -lGLU -lGL -lXrandr -lX11 -lrt -ldl -lglut

./a

rm ./a

