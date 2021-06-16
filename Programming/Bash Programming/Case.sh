#! /bin/bash



echo -e "hey user enter some character : \c"
read value

case $value in 
	[a-z] )
		echo "USER ENTERED VALUE IS $value from a to z" ;;
	[A-Z] )
		echo "USER ENTERED VALUE IS $value from A to Z" ;;
	[0-9] )
		echo "USER ENTERED VALUE IS $value from 0 to 9" ;;
	? )
		echo "USER ENTERED VALUE IS $value special character" ;;
	* )
		echo "UNknown input " ;;
esac
