#!/bin/bash

abc="hello world"
foo() 
{
    echo "Function foo is executing"
    echo $abc
    local abc="aaaaaaaaaaaaaaa"
    echo $abc
    echo "Function foo over"
}

echo "script starting"
echo $abc
foo
echo "script ended"
echo $abc

exit 0
