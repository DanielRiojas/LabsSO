#!/bin/bash
N=$1

for ((i=1; i<=N; i++)) do
    for ((j=1; j<=N; j++)) do
        A[$i,$j]=($RANDOM%100)
        B[$i,$j]=($RANDOM%100)
    done
done

for ((i=1; i<=N; i++)) do
    for ((j=1; j<=N; j++)) do
        printf ${A[$i,$j]} ' '
        printf ${B[$i,$j]} ' '
    done
done
