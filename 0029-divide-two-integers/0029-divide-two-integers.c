int divide(int dividend, int divisor) {
    double q = (double)dividend / divisor;
    if(q < pow(-2,31))
    {
        q = pow(-2,31);
    }
    if(q >= (pow(2,31) - 1))
    {
        q = pow(2,31) - 1;
    }
    return q;
}