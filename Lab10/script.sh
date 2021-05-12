#!/bin/bash

for ((i=2; i<=4096; i*=2)) do
    gcc mmult.c -D N=$i -o 
    ./mmult
done


