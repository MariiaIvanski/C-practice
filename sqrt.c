float SquareRoot (float number){
 float sqrt = number / 2;
    float temp = 0;
    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = (sqrt + number / sqrt) / 2;
    }
    return sqrt;
}
