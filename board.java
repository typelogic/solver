
class board {
    public static void main(String[] args) throws InterruptedException
    {
        // board has 8 list, where each list
        // has 8 members
        char [][] board = {
            {'r','n','b','q','k','b','n','r'},
            {'p','p','p','p','p','p','p','p'},
            {'.','.','.','.','.','.','.','.'},
            {'.','.','.','.','.','.','.','.'},
            {'.','.','.','.','.','.','.','.'},
            {'.','.','.','.','.','.','.','.'},
            {'P','P','P','P','P','P','P','P'},
            {'R','N','B','Q','K','B','N','R'},
        };

        // e2e4
        board[6][4] = '.';
        board[4][4] = 'P';

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                System.out.print(board[i][j]);
                Thread.sleep(100);
            }
            System.out.println();
        }
    }
}
