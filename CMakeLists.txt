cmake_minimum_required (VERSION 3.21)
project (PROJECT)
enable_testing()

add_executable(list-names src/list-names.c)
add_test(list-names test-list-names.sh)

add_executable(list-seqs src/list-seqs.c)
add_test(list-seqs test-list-seqs.sh)
