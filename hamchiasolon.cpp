string divide(char dividend[], int divisor)
{
    string result;
    int index = 0;
    int temp = dividend[index] - '0'; 
    while (temp < divisor)
        temp = temp * 10 + (dividend[++index] - '0');
    while (strlen(dividend+index) > 0)
    {
        result += (temp / divisor) + '0'; 
        temp = (temp % divisor) * 10 + dividend[++index] - '0'; 
    }
    if (result.length() == 0) 
        return "0";
    return result;
}
