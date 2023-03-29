After every successful hunt, it is necessary to divide the spoils and engage in numerous boasts. The first of these things is regulated on the Island in a very simple way: each hunter keeps what they caught. In the case of the latter, the rules are even simpler: there are no rules. This recklessness, combined with the hot-blooded nature of Dotnet, turns the concluded hunt into a sporting gala...often very brutal. This time, the Great Huntsman did not want to allow it. To prevent the hunters from fighting for the title of the best, he asked Ada and Serweryn to rank all the participants of the hunt according to their catches.

Input:

The first line of the input contains the number n of hunters taking part in the hunt. The next n lines describe the hunters, consisting of: a name composed of up to twenty lowercase and uppercase Latin alphabet letters; the declared number of caught crabs k_i and the number of traps used by the hunter p_i.

1 ≤ n ≤ 100000
0 ≤ k_i ≤ 99
1 ≤ p_i ≤ 9

Output:

The output should contain a list of hunter names sorted in descending order by the number of caught crabs. In case of the same number of caught crabs, the first one is the hunter who used a smaller number of traps. If two people caught the same number of crabs using the same number of traps, the order from the input should be preserved.

Example:

Input:

6

Albert 5 3

Bartek 10 1

Cezary 3 2

Dominik 4 3

Eustachy 1 2

Franek 3 2

Output:

Bartek Albert Dominik Cezary Franek Eustachy

Note! The use of STL libraries is not allowed. The program should be a standalone implementation of sorting in linear time.
