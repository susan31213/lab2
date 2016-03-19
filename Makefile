bmi: a.o A.o
	g++ -o bmi a.o A.o
a.o: a.cpp a.h
	g++ -c a.cpp
A.o: a.h A.cpp
	g++ -c A.cpp
clean:
	rm bmi *.o
