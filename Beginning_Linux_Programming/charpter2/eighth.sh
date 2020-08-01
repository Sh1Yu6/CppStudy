#!/bin/bash

echo "Is it morning? Please answer yes or no"
read timeOfDay

case "$timeOfDay" in
    yes | y | Yes | YES )   echo "Good Morning";;
    n* | N* )               echo "Good Afternoon";;
    * )                     echo "Soory, answer not recognized";;
esac

exit 0
