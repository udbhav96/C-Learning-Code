void print_matrix(double m[5][6]){
    int i,j;
    for(i=0 ; i < 5 ; i = i +1){

        for(j=0 ; j < 6 ; j = j + 1){
            printf("%f" , m[i][j]);

        }
    }
}