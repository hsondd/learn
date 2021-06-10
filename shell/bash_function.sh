#!/bin/bash

function function_B {
    echo Function B.
}
function function_A {
    echo $1
}
function function_D {
    echo Function D.
}
function function_C {
    echo $1
}

#function calls

function_A "Function A."
function_B
function_C "function c"
function_D