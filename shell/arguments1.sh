#!/bin/bash

echo "Script name: $0"
function func {
    for var in $*
    do
        let i=i+1
        echo "\$${i} argument is: ${var}"
    done
    echo "Total count of arguments: $#"
}

function func2 {
    echo "--- \"$*\""
    for ARG in "$*"
    do
        echo $ARG
    done

    echo "---\"\$@\""
    for ARG in "$@"
    do
        echo $ARG
    done
}

func We are argument
func2 hson dep trai