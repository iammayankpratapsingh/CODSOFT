echo "Enter the first number: "
read num1
echo "Enter the operator (+, -, *, /): "
read operator
echo "Enter the second number: "
read num2
result=0
case $operator in
  +)
    result=$((num1 + num2))
    ;;
  -)
    result=$((num1 - num2))
    ;;
  *)
    result=$((num1 * num2))
    ;;
  /)
    result=$(echo "scale=2; $num1 / $num2" | bc)
    ;;
esac
echo "The result is: $result"
