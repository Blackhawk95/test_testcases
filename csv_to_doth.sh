#####!bin/bash
# USAGE : ./csv_to_doth input_file.csv output_file.h
# TO.DO : change the hardcoded 3, also the csv is currently space seperated

#Phase 1, this creates a cleaned version of input and stores it as cleanedinput
cleaned=cleaned$1
head -n-9 $1 | tail -n+8 > tdumpr
awk '{print $2,$3,$4}' tdumpr > $cleaned

#the below one is ok,  but I believe to avoid issues if it skips a number line count is better
#var=`tail -n 1 $cleaned | awk -F' ' '{print $3}'`
var=`wc -l < $cleaned`
begpart1="long long int arr["
begpart2="][3]={{"
endpart="}};"

sed ':a;N;$!ba;s/\n/},{/g' $cleaned > $2 # remove "linefeed and not cariage return" and replace with },{
sed -i 's/ /,/g' $2 # remove space and replace it with ,
echo $endpart >> $2 # add endpart
sed -i ':a;N;$!ba;s/\n//g' $2 # remove \n due to endpart
sed -i "1s;^;$begpart1$var$begpart2;" $2 #combine the beggining part

rm tdumpr