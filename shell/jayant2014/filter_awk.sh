#!/bin/bash

echo "Enter filename"

read  fname

if [[ -f $fname ]]
then
	#print content
	#awk '{print}' $fname

	#print specific lines
#	awk '/root/ {print}' $fname

	# print multiple fields
	awk '/testuser/ {print $2,$3}' $fname
else
	echo "$fname does not exist"
fi
