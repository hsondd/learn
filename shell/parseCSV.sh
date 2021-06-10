#!/bin/bash

while IFS="," read -r rec_col1 rec_col2 rec_col3 rec_col4
do
	echo "Displaying Name - $rec_col1"
	echo "Title - $rec_col2"
	echo "ID - $rec_col3"
	echo "Location - rec_col4"
	echo ""

done < <(tail -n +2 directory.csv)
