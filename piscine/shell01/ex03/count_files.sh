find . \( -type f -o -type d \) | wc -l | sed 's/ //g' | tr -d \t
