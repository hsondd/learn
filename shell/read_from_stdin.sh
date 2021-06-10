#!/bin/bash
echo Here is a summary of sales data:
echo ===============================
echo

cat /dev/stdin | cut -d ' ' -f 2,3 | sort