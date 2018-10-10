#!/bin/bash

if [ "$1" == "" ]
then
	echo "Modo de usar: ./git_script <texto do commit>"
else
	git add . && git commit -m "$1" && git push origin master
fi

