#!/bin/bash

echo "Is it morning? Please answer yes or no"
read timeOfDay

case "$timeOfDay" in
    yes)    echo "Good morning";;
    no )    echo "Good Afternoon";;
    y  )    echo "Good morning";;
    n  )    echo "Good Afternoon";;
    *  )    echo "Sorry, answer not recognized";;
esac

exit 0
