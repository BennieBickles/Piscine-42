cat /etc/passwd | grep -v "^#" | cut -d ":" -f1 | awk 'NR%2==0' | rev | sort -n -r | awk "NR>=$FT_LINE1&&NR<=$FT_LINE2" | tr "\n" "," | sed 's/.$/./' | sed 's/,/, /g' | tr -d '\n'
