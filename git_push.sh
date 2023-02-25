#!/bin/bash

git add .

read -p "Enter your commit message: " message

git commit -m "$message"

git push

echo "Your files have been successfully pushed"
echo "Your commit message: $message"
