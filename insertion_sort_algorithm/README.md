Ada and Serweryn, as part of further modernizing the Island, wanted to build transmission towers, and the highest peaks in the area were perfect for this. The most economical way to place the towers was to start work on the lowest selected peak, gradually moving higher until reaching the highest peak.

The Island was a very mountainous terrain. All the peaks there had their own name. The members of the tribe had a special respect for peaks whose height above sea level was a power of two. Ada and Serweryn decided to respect their preference and service peaks of such heights first.

# Input:

The first line of the input contains an integer t, which is the number of tests. Then there are t sets of data. Each set consists of an integer n, which is the number of peaks. In the next n lines, there are descriptions of the peaks. The description consists of a one-word string s - the name of the peak and a positive integer w - the height of the peak in meters above sea level.

1 ≤ t ≤ 10
1 ≤ n ≤ 50000
1 ≤ w < 2^32

# Output:
For each set of data, the program should print an ordered list of peaks in the order of tower placement. Each peak should be displayed in the format s-w. In the case of peaks with the same values, the order of occurrence on the list should be preserved.

# Example:

Input:
#
3

5

Indrys 3

Fossa 67

Dingo 64

Werweta 10

Kwezal 1

3

Indrys 3

Fossa 2

Dingo 4

1

Indrys 10

#
Output:
#
Kwezal-1 Dingo-64 Indrys-3 Werweta-10 Fossa-67

Fossa-2 Dingo-4 Indrys-3

Indrys-10 

