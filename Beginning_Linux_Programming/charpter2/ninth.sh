#!/bin/bash

echo "Is it morning? Please enter yes or no"
read timeOfDay

case "$timeOfDay" in
    yes | y | Yes | YES )
        echo "Good Morning"
        echo "Up bright and early this morning"
        ;;
    [nN]* )
        echo "Good Afternoon"
        ;;
    * )
        echo "Sorry, answer not recognized"
        echo "Please answer yes or no"
        exit 1
        ;;
esac

exit 0
