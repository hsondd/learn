declare -a ARRAY

exec 10<&0
let count=0

while read LINE;
do
	ARRAY[$count]=$LINE
	((count++))
done

echo Number of elements: ${#ARRAY[@]}
echo ${ARRAY[@]}

exec 0<&10 10<&-
