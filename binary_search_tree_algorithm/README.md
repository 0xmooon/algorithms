The Village Head's Administration Office was not accustomed to working with a large number of invoices. And orders for infrastructure construction on the Island were still coming in. Additionally, the Headman recently hired his nephew from a neighboring village, who was not very good with the printer. He printed many invoices several times, resulting in the entire office being filled with them. The Headman asked Ada and Serweryn for help. He requested a tool to organize all the invoices alphabetically. Ada and Serweryn came up with the idea of using a binary tree structure for this purpose. They also realized that there was no need to enter the same invoice multiple times accidentally printed by the Headman's nephew. It was sufficient to remember in such a tree the number of occurrences of each invoice.

Input:

On the standard input, the number of printed invoices to enter, n, appears on the first line, followed by n lines containing invoice names. Names can consist of digits and capital letters.

0 ≤ n ≤ 3000000

Output:

The list of n entered invoices sorted in ascending order should be printed on subsequent lines.

Example:
![image](https://user-images.githubusercontent.com/127693833/228341385-47c16d6e-b398-4f43-962f-57c82cb72e3f.png)

Note: The task is to provide a standalone implementation of a binary tree without using the STL library.

