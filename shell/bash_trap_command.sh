#!/bin/bash
#bash trap command
trap bashtrap INT

clear;
bashtrap()
{
	echo "CTRL+C Deteced? ...executing bash trap!"
}

for a in `seq 1 10`; do
	echo "$a/10 to Exit."
	sleep 1;
done
echo "Exit bash trap example!!!"
