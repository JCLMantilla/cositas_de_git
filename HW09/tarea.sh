#!/bin/bash
g++ main.cpp -o main.x
./main.x > data.dat
python grafica.py
rm main.x
rm data.dat