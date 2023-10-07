const int NUMMOVES = 8;
const int DX[] = {-1,-1,-1,0,0,1,1,1};
const int DY[] = {-1,0,1,-1,1,-1,0,1};

checkBlocks(block** array, int row, int col, int position x, int position y) {
    int numBlocks = 0 ;
    for(int i = 0 ; i < NUMMOVES ; i++) {
        if(x+DX[i] >= row || x+DX[i] < 0) {
            continue ;
        }
        if(y+DY[i] >= col || y+DY[i] < 0) {
            continue ;
        }
        if(array[x+DX[i]][y+DY[i]] == 'B') {
            numBlocks++ ;
        }
    }
    return numBlocks ;
}

checkFlags(block** array, int row, int col, int position x, int position y) {
    int numFlags = 0 ;
    for(int i = 0 ; i < NUMMOVES ; i++) {
        if(x+DX[i] >= row || x+DX[i] < 0) {
            continue ;
        }
        if(y+DY[i] >= col || y+DY[i] < 0) {
            continue ;
        }
        if(array[x+DX[i]][y+DY[i]] == 'B') {
            numFlags++ ;
        }
    }
    return numFlags ;
}

