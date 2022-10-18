#!/bin/bash

RED=$'\033[0;31m'
GREEN=$'\033[0;32m'
NC=$'\033[0m'

PROG="./megaphone"

echo ${RED}${PROG} "\"shhhhh... I think the students are asleep...\""${NC}
${PROG} "shhhhh... I think the students are asleep..."

echo ${RED}${PROG} Damnit "\" ! \"" "\"Sorry students, I thought this thing was off.\""${NC}
${PROG} Damnit " ! " "Sorry students, I thought this thing was off."

echo ${RED}${PROG}${NC}
${PROG}
