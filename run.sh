#!/bin/bash

if [[ -f "main.lua" ]]
then
    rm main.lua
fi

g++ /home/$USER/love/love.cpp/main.cpp $1 $2

./a.out

love .