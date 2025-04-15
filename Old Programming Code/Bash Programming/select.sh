#! /bin/bash

select name in mark john ben10
do 
	case $name in
	mark )
		echo "mark is fucking selected"
		;;
	john )
		echo "john is fucking selected"
		;;
	ben10 )
		echo "ben10 is fucking selected"
		;;
	* )
		echo "error"
		;;			
	  
	esac
done

