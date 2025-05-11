//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/description/

int numberOfSteps(int num) {
    int steps = 0, tmp = num;
    if (num <= 0 || num >= pow(10, 6))
        return (0);
    while (tmp > 0)
    {
        if (tmp % 2 == 0)
        {
            tmp /= 2;
            steps++;
        }
        else
        {
            tmp--;
            steps++;
        }
    }
    return (steps);
}
