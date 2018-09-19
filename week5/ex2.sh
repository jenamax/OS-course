#!/bin/bash

DATA=data.txt
sleep 2
while IFS='' read -r s || [[ -n "$s" ]]; do
    echo "$s"
    last=$s
done < $DATA
echo "$(($last + 1))" >> $DATA
