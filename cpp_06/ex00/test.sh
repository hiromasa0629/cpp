#!/bin/bash

RED=$'\033[0;31m'
GREEN=$'\033[0;32m'
NC=$'\033[0m'

PROG="./convert"

echo ${RED}"====== Test Characters ======"${NC}
array=("\"\"" "a" "{" "+55" "-55" "++39")
for str in "${array[@]}"; do
	echo ${GREEN}"${PROG} ${str}"${NC}
	${PROG} ${str}
done

echo ""
echo ${RED}"====== Test Integers ======"${NC}
array=("0" "123" "2147483647" "2147483648" "-2147483648" "-2147483649")
for str in "${array[@]}"; do
	echo ${GREEN}"${PROG} ${str}"${NC}
	${PROG} ${str}
done

echo ""
echo ${RED}"====== Test Float ======"${NC}
array=("0.0f" "1.23f" "-123.45f" "+1.23456f" "inff" "-inff")
for str in "${array[@]}"; do
	echo ${GREEN}"${PROG} ${str}"${NC}
	${PROG} ${str}
done

echo ""
echo ${RED}"====== Test Double ======"${NC}
array=("0.0" "12.3" "-123.45" "+1.23456" "inf" "-inf")
for str in "${array[@]}"; do 
	echo ${GREEN}"${PROG} ${str}"${NC}
	${PROG} ${str}
done

echo ""
echo ${RED}"====== Test nan ======"${NC}
echo ${GREEN}"${PROG} nan"${NC}
${PROG} nan
