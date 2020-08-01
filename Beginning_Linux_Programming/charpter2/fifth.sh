#!/bin/bash

echo "Enter password"
read tryThis

while [ "$tryThis" != "secret" ]
do 
    echo "Sorry, try again"
    read tryThis
done
exit 0
