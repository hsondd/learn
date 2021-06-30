#!/bin/bash
echo "Enter the state name: "
read state

customers=`grep "$state" customers.txt | awk -F "/" '{print "Customer Name: " $2, ", Mobile No: " $4}'`
if [ "$custormers" != "" ]; then
	echo $custormers
else
	echo "No customer found"
fi
