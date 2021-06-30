sed -n '/are/p' filea.txt 
sed -n '/are/ARE/p' filea.txt 
sed -n '/are/ARE/p' filea.txt 
sed -n 's/are/ARE/p' filea.txt 
sed -n '/are/ s/so/SO/p' filea.txt 
sed 2 | sed 'p'
seq 2 | sed 'p'
sed -n '2p; 4p' filea.txt 
