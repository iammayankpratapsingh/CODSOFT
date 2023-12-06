read -p "Enter a number: " number
factorial=1
while [[ $number -gt 1 ]]; do
  factorial=$((factorial * number))
  number=$((number - 1))
done
echo "The factorial of $number is: $factorial"
