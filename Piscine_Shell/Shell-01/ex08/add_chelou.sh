echo "ibase=5;obase=D;$(echo "$FT_NBR1+$FT_NBR2" | tr \' 0 | tr \\ 1 | tr \" 2 | tr \? 3 | tr \! 4 | tr mrdoc 01234)" | bc | tr 0123456789ABC 'gtaio luSnemf'
