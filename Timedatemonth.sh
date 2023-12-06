menu=("Print Time" "Print Month" "Print Day of Week")

PS3="Select an option: "
select option in "${menu[@]}"; do
  case $REPLY in
    1) date +%T;;
    2) date +%B;;
    3) date +%A;;
    *) echo "Invalid option.";; 
  esac
  break
done
