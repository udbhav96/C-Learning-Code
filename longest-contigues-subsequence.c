/*
 * This program reads a sequence of integers from the user, terminated by -1,
 * and finds the length of the longest subsequence of consecutive numbers
 * that are strictly increasing.
 *
 * Variables:
 * - p: holds the previous number in the sequence.
 * - c: holds the current number in the sequence.
 * - len: tracks the length of the current increasing sequence.
 * - d: stores the maximum length (i.e., the longest increasing sequence found).
 *
 * Steps:
 * 1. Read the first number (p).
 * 2. If the first number is not -1 (the termination value), initialize len and d to 1.
 * 3. Read the next number (c) and enter a loop that continues until c equals -1.
 * 4. Inside the loop:
 *    - If the previous number (p) is less than the current number (c), increment len.
 *    - Otherwise (i.e., the sequence is not increasing), update d if len is larger than d,
 *      and then reset len to 1.
 *    - Update p to be the current number (c) and read the next number into c.
 *    - After reading, update d if the current len is greater than d.
 * 5. Once the loop terminates, print the maximum length (d) found.
 */
