gcc -Wall -Werror -Wextra -std=c11 main.c -o main

result1=$(./main < test1.txt)
expected_result1="John Wick, John King"
if [ "$result1" = "$expected_result1" ]; then
    echo "Test 1: OK"
else
    echo "Test 1: FALSE"
fi

result2=$(./main < test2.txt)
expected_result2="Nothing"
if [ "$result2" = "$expected_result2" ]; then
    echo "Test 2: OK"
else
    echo "Test 2: FALSE"
fi