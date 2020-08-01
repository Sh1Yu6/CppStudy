#!/bin/bash

if [ -f this_file ]
    then
        if [ -f that_file ]
            then
                if [ -f the_other_file ]; then
                    echo "All files present, and correct"
                fi
        fi
fi



if [ -f this_file ]; then
    foo="True"
elif [ -f that_file ]; then
    foo="True"
elif [ -f the_other_file ]; then
    foo="True"
else
    foo="False"
fi

if [ "$foo" = "True" ]; then
    echo "One of the files exists"
fi

exit 0

