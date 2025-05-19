all: matrix

.PHONY: clean

clean:
	rm *.o matrix

matrix.o: matrix.cpp matrix.hpp
	$(CPP) -c $< $(FLAGS)

matrixmain.o: matrixmain.cpp matrix.hpp
	$(CPP) -c $< $(FLAGS)

matrix: matrixmain.o matrix.o
	$(CPP) -o $@ $(FLAGS) $^