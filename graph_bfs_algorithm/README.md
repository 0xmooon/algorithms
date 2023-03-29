Milk supplier Kazimierz has decided to keep up with the times and retire his loyal horse, converting the cart into a swing. However, he still needs a new means of transportation to deliver milk. The well-known shaman and inventor on the Island, Leonard, agreed to help him design a car, but they were unable to determine the required size of the milk container. They sought help from Ada and Serweryn. Kazimierz did not visit all the villages on the island, only a certain subset of them. Therefore, the computer scientists decided to determine the number of villages that Kazimierz passes through on his way to his furthest destination. Based on this, Leonard will be able to calculate the volume of the milk container in Kazimierz's car.

Input:

The first line of the input contains a natural number n, indicating the total number of villages. The next line is a natural number m, which determines the number of villages visited by Kazimierz.

Then, there is a line containing the names of all villages separated by spaces. The names may consist of letters and numbers. The next line lists the neighbors of all n villages, ending with a single letter "X". The order of the neighbor lists is consistent with the order of village names inputted, i.e. the i-th list ending with the letter "X" specifies the neighbors of the i-th village in the sequence of village names.

The last two lines of the input are, respectively, the name of the starting village and a list of m destination villages for Kazimierz, separated by spaces. It is guaranteed that it is possible to reach each of the destination villages from the starting village.

1 ≤ n ≤ 30000

1 ≤ m ≤ 100

Output:

The number of villages visited during the journey to the farthest destination village.

Example:

Input:

5

2

Antonin Bulgur Czychawa Drecja Euk

Bulgur Euk X Antonin Czychawa Drecja X Bulgur Drecja X Bulgur Czychawa Euk X Antonin Drecja X

Antonin

Bulgur Drecja

Output:

2
