#!/bin/bash
#
# Script to extract strings, future i plan to compare each extracted string
# to a wordlist, searching for flags.
#

file_check=$(which strings);
ext="";
if [[ ! -f $file_check ]]; then
    echo "O executavel 'strings' nao foi encontrado no computador."
    exit 0;
fi


if [[ $# < 2 ]]; then
    echo "Uso: $0 -f <ARQUIVO>";
    exit 0;
fi

while getopts "f:" opt; do
    case $opt in
        f) ext=$OPTARG;;
        ?) echo "Argumento invalido."; exit 1 ;;
    esac
done

if [[ $ext == "" ]]; then
    echo "Erro: Argumento vazio.";
    exit 0
fi

strings $ext
