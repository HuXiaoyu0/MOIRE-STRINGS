# MOIRE-STRINGS
Use C++ to create .txt file that contains simple but beautiful moire patterns.

Valid command lines for the program:
./moire.exe abcde 9 square abcde_9_square.txt
./moire.exe abcde 9 right_triangle abcde_9_right_triangle.txt
./moire.exe abcde 9 isosceles_triangle abcde_9_isosceles_triangle.txt
./moire.exe ::....... 21 square dots_21_square.txt
./moire.exe '__hi!__' 21 right_triangle hi_21_right_triangle.txt
./moire.exe "|_| " 21 isosceles_triangle blocky_21_isosceles_triangle.txt

Results:
abcde 9 square.txt  
*********
*abcdeab*
*cdeabcd*
*eabcdea*
*bcdeabc*
*deabcde*
*abcdeab*
*cdeabcd*
*********

abcde 9 right triangle.txt
*
**
*a*
*bc*
*dea*
*bcde*
*abcde*
*abcdea*
*********

abcde 9 isosceles triangle.txt
*
*a*
*bcd*
*eabcd*
*eabcdea*
*bcdeabcde*
*abcdeabcdea*
*bcdeabcdeabcd*
*****************

dots 21 square.txt  
*********************
*::.......::.......:*
*:.......::.......::*
*.......::.......::.*
*......::.......::..*
*.....::.......::...*
*....::.......::....*
*...::.......::.....*
*..::.......::......*
*.::.......::.......*
*::.......::.......:*
*:.......::.......::*
*.......::.......::.*
*......::.......::..*
*.....::.......::...*
*....::.......::....*
*...::.......::.....*
*..::.......::......*
*.::.......::.......*
*::.......::.......:*
*********************

hi 21 right triangle.txt
*
**
*_*
*_h*
*i!_*
*___h*
*i!___*
*_hi!__*
*__hi!__*
*__hi!___*
*_hi!____h*
*i!____hi!_*
*___hi!____h*
*i!____hi!___*
*_hi!____hi!__*
*__hi!____hi!__*
*__hi!____hi!___*
*_hi!____hi!____h*
*i!____hi!____hi!_*
*___hi!____hi!____h*
*********************

blocky 21 isosceles triangle.txt
*
*|*
*_| *
*|_| |*
*_| |_| *
*|_| |_| |*
*_| |_| |_| *
*|_| |_| |_| |*
*_| |_| |_| |_| *
*|_| |_| |_| |_| |*
*_| |_| |_| |_| |_| *
*|_| |_| |_| |_| |_| |*
*_| |_| |_| |_| |_| |_| *
*|_| |_| |_| |_| |_| |_| |*
*_| |_| |_| |_| |_| |_| |_| *
*|_| |_| |_| |_| |_| |_| |_| |*
*_| |_| |_| |_| |_| |_| |_| |_| *
*|_| |_| |_| |_| |_| |_| |_| |_| |*
*_| |_| |_| |_| |_| |_| |_| |_| |_| *
*|_| |_| |_| |_| |_| |_| |_| |_| |_| |*
*****************************************
