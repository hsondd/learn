#!/bin/bash

IFS= read -r -p "Enter sentence: " input
echo "$input" |  sed 's/\(\b[A-Z]\)/\(\1\)/g'

