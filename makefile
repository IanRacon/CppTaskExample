MAIN=lab11
SRC=itr
SRC1=numutils
SRC2=foreach
FLAGS=-g -c -Wall
CXX=g++
$(MAIN):$(MAIN).o $(SRC).o $(SRC1).o $(SRC2).o
	$(CXX) $^ -o $@
$(MAIN).o:$(MAIN).cpp
	$(CXX) $(FLAGS) $^
$(SRC).o:$(SRC).cpp
	$(CXX) $(FLAGS) $^
$(SRC1).o:$(SRC1).cpp
	$(CXX) $(FLAGS) $^
$(SRC2).o:$(SRC2).cpp
	$(CXX) $(FLAGS) $^
clean:
	rm -rf *.o *~ $(MAIN)
