!/bin/sh

make
./compiler test_pattern/assignment.c
java -jar ../jasmin2-4/jasmin.jar output.j
java output < test_pattern/input_a

./compiler test_pattern/expression.c
java -jar ../jasmin2-4/jasmin.jar output.j
java output

./compiler test_pattern/if_stmt.c
java -jar ../jasmin2-4/jasmin.jar output.j
java output < test_pattern/input_if

./compiler test_pattern/fibonacci.c
java -jar ../jasmin2-4/jasmin.jar output.j
java output

./compiler test_pattern/random.c
java -jar ../jasmin2-4/jasmin.jar output.j
java output

make clean
