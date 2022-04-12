#!/bin/bash
#^[a-zA-Z]{1,}\.[a-zA-Z]{1,}[0-9]{0,}\@northeastern\.edu$
if [[ "$#" == 2 ]]
then
 if [[ $1 =~ ^00[0-9]{7}$ ]]
 then
  if [[ $2 =~ ^[a-zA-Z]{1,}\.[a-zA-Z]{1,}[0-9]{0,}\@northeastern\.edu$ ]]
  then
   nuid=$((10#$1))
   sc1=$(( $nuid % 15))
   sc1=$(( 2 * $sc1))
   echo -e "Thanks, your email is: $2, \nand your 9 programs to work with are:"
   for (( c=1; c<10; c++ ))
   do
           increment=$(( 2 * $c))
           code=$(($(($sc1 + $increment)) % 32))
           if [[ $code -lt 10 ]]
           then
           echo "$c. codeN110$code.c"
           else
           echo "$c. codeN11$code.c"
           fi
   done
  else
   echo "Invalid Email"
  fi
 else
  echo "Invalid NUID"
 fi
else
 echo "Enter two arguments"
fi