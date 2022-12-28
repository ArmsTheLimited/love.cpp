#!/bin/bash

echo "--- installing prerequisites ---"
sudo apt-get install love
sudo apt-get install g++
echo "--- done ---"

echo "--- adding to ~/.bashrc ---"
echo alias lovecpp="'$(pwd)/run.sh $1 $2'" >> ~/.bashrc
echo "--- done ---"
echo "Restart your terminal, and you can now run your script with the command 'lovecpp [your script name][optional compiler flag]'"

chmod +x run.sh