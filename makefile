Mino.out: main.o MinoT.h Mino_block.h
	g++ -o Mino main.o MinoT.h Mino_block.h
main.o: MinoT.h main.cpp Mino_block.h
	g++ -c main.cpp
clean:
	rm *.o
