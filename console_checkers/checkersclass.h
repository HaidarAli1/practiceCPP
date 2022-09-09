class pawn {
    public:
        bool color; //True for Black, False for White
        int pieceNum; //Numbering Pieces 12 per side
        int xpos;
        int ypos;

        void movement();
        pawn (bool side, int num, int x, int y);
};
