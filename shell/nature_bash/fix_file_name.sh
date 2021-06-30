#!/bin/bash

set -euo pipefail

NATUREDIR=nature_tmpdir

if [ ! -d "$NATUREDIR" ]
then
    echo -e "\nRequierd set up not performed. Run init.sh first."
    exit 0
fi

cd $NATUREDIR
for file in datafile*.txt
do
    newName=$(echo $file | sed -E 's/([0-9]{2})-([0-9]{2})-([0-9]{4})/\3\2\1/g')
    echo "Renaming $file to $newName"
    mv $file $newName
done