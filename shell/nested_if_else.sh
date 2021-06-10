#!/bin/bash
choice=4

echo "1. Bash"
echo "2. Scripting"
echo "3. Tutorial"
echo -n "Please choose a word[1, 2 or 3]? "

while [ $choice -eq 4 ]; do

read choice

if [ $choice -eq 1 ] ; then
	echo "You have chosen word: Bash"
else
	if [ $choice -eq 3 ] ; then
		echo " You have chosen: Tutorial"
	else
		echo "Please make choice between 1-3"
		echo "1. Bash"
		echo "2. Scripting"
		echo "3. Tutorial"
		echo -n "Please choose a word [1, 2, 3]"
	fi
	
fi
done
