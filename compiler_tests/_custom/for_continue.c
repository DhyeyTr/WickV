int f()
{
    int y = 0;
    int i;
    for(i=0; i<10; i++){
        if (i>=5){
            continue;
        }
        ++y;
    }
    return y;
}
