#!/bin/bash

echo "Is it morning? Please answer yes or no"
read timeOfDay

if [ "$timeOfDay" = "yes" ]
    then
        echo "Good moring"
elif [ "$timeOfDay" = "no" ]
    then
        echo "Good afternoon"
else
    echo -n "Sorry, $timeOfDay not recognized. Enter yes or no: "
    exit 1
fi

exit 0
