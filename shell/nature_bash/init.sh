set -euo pipefail

NATUREDIR=nature_tmpdir

#month with 31 days
declare -a months=(01 03 05 07 08 10 12)

if [ ! -d $NATUREDIR ]
then
    echo -e "\nCreating working directory $NATUREDIR..."
    mkdir $NATUREDIR
fi
cd $NATUREDIR

echo -e "Creating dummy data files..."
for month in "${months[@]}"
do
    for day in {1..31}
    do
        if [ "$day" -lt 10 ]; then
            fname=datafile-0$day-$month-2021.txt
        else
            fname=datafile-0$day-$month-2020.txt
        fi
        touch $fname
    done
done

echo -e "Creating dummy absorbance data..."
echo "sample","bkgd" > background.csv
for i in {1..50}; do
    echo $i,$(($RANDOM / 100)) >> background.csv
done

for i in {1..3}; do
    fname=reading0$i.csv
    echo "sample","abs0$i" > $fname
    for j in {1..50}; do
        echo $j,$RANDOM >> $fname
    done
done

echo -e "\nCreated $(ls | wc -l | sed -E 's/^[[:space:]]*//g') files."
echo -e "To view them, execute the file-list command, 'ls nature_tmpdir | less'."