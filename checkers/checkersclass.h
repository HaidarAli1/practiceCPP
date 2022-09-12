class pawn {
    public:
        bool color = true; //True for Black, False for White
        int pieceNum; //Numbering Pieces 12 per side
        int xpos = 1;
        int ypos = 1;

        void movement();
        void board_place(int x, int y);
        pawn() =  default;
        pawn (bool side, int num, int x, int y);
};
