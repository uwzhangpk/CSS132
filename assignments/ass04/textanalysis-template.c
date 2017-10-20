

/*
 * For each letter in the message,
 * if the letter is a-z,
 * increase the corresponding value in statsArr
 *
 * message - a string which might include space, punctuation
 *           any letter which is not a-z is ignored
 * statsArr - an array of int's for how many times we have seen each letter
 *            statsArr[0] is for how many times 'a' has been seen
 *            statsArr[25] is for how many times 'z' has been seen
 */
void analyzeLine(char * message, int * statsArr)
{

}

/*
 * print out the non-zero values in statsArr in a pretty format
 * For example, the below output says we have seen 'a' 1 times and 'f' 7 times
 * a: 1
 * f: 7
 *
 * statsArr - an array of int's for how many times we have seen each letter
 *            statsArr[0] is for how many times 'a' has been seen
 *            statsArr[25] is for how many times 'z' has been seen
 * length - length of statsArr
 *           always 26 for now, but just in case we decide to use other languages later
 *
 */
void printStats(int * statsArr, int length)
{

}

/*
 * Prompt the user to enter a line of text,
 * put the user input into message
 *
 * message - a string which we will get from user
 *
 * uses scanf(" %[^\r\n]", message); to read a full line
 * if scanf does not return 1, we have a problem!
 */
void getLine(char * message)
{

}


/*
 * Prompt the user to enter a line of text,
 * analyze the line (counting all the a-z letters and adding them to our stats)
 * print the statistics on all the input read so far
 * keep reading input until user enters "stop"
 */
void textStats()
{
    char str[140];
    char * stopMessage = "stop";
    int charStats[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int charStatsLength = 26;
    getLine(str);
    while (strcmp(stopMessage, str) != 0)
    {
        analyzeLine(str, charStats);
        printStats(charStats, charStatsLength);
        getLine(str);
    }
}

int main()
{
    textStats();
    return 0;
}
