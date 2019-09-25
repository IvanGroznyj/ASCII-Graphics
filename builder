#!/bin/bash
cd ./Debug
g++ ../*.cpp -o main.out
echo "Compiling ended. Press enter"
read
./main.out