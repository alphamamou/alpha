# Les fichiers .o se trouvent dans le dossier ./Obj
# Lors de l'ajout d'un nouveau fichier .o dans le Makefile, il
# faudra donc bien penser à faire précéder son nom de ./Obj/
# à chaque fois.
mesurer:	./Obj/mesurer.o  
	g++ -std=c++11 -g -o mesurer ./Obj/mesurer.o

# Les fichiers .cpp et .hpp se trouvent dans le dossier ./Sources
# Lors de l'ajout d'un nouveau fichier .cpp ou .hpp dans le Makefile,
#  il faudra donc bien penser à faire précéder son nom de ./Sources/
./Obj/mesurer.o:	./Sources/mesurer.cpp
	g++ -std=c++11 -g -c ./Sources/mesurer.cpp -o ./Obj/mesurer.o


clean:
	rm -f mesurer ./Obj/*.o
