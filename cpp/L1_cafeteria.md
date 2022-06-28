A cafeteria table consists of a row of NN seats, numbered from 11 to NN from left to right. Social distancing guidelines require that every diner be seated such that KK seats to their left and KK seats to their right (or all the remaining seats to that side if there are fewer than KK) remain empty.
There are currently MM diners seated at the table, the iith of whom is in seat S_iS 
i
​
 . No two diners are sitting in the same seat, and the social distancing guidelines are satisfied.
Determine the maximum number of additional diners who can potentially sit at the table without social distancing guidelines being violated for any new or existing diners, assuming that the existing diners cannot move and that the additional diners will cooperate to maximize how many of them can sit down.
Please take care to write a solution which runs within the time limit.

Constraints

- $ 1 \leq N \leq 10^{15} $
- $ 1 \leq K \leq N $
- $ 1 \leq M \leq 500,000 $
- $ M \leq N $
- $ 1 \leq S_i \leq N $