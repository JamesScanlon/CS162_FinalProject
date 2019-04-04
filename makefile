
output: main.o Space.o Pokemon.o Bulbasaur.o Game.o PokeStore.o Road.o Grass.o Oak.o Mom.o Cave.o PokeCenter.o Brock.o Misty.o Player.o Backpack.o Items.o Menu.o Party.o
	g++ main.o Space.o Pokemon.o Bulbasaur.o Game.o PokeStore.o Road.o Grass.o Oak.o Mom.o Cave.o PokeCenter.o Brock.o Misty.o Player.o Backpack.o Items.o Menu.o Party.o -o output

main.o: main.cpp
	g++ -c main.cpp -std=c++11

Space.o: Space.cpp
	g++ -c Space.cpp -std=c++11

Pokemon.o: Pokemon.cpp
	g++ -c Pokemon.cpp -std=c++11

Bulbasaur.o: Bulbasaur.cpp
	g++ -c Bulbasaur.cpp -std=c++11

Game.o: Game.cpp
	g++ -c Game.cpp -std=c++11

PokeStore.o: PokeStore.cpp
	g++ -c PokeStore.cpp -std=c++11

Road.o: Road.cpp
	g++ -c Road.cpp -std=c++11

Grass.o: Grass.cpp
	g++ -c Grass.cpp -std=c++11

Oak.o: Oak.cpp
	g++ -c Oak.cpp -std=c++11

Mom.o: Mom.cpp
	g++ -c Mom.cpp -std=c++11

Cave.o: Cave.cpp
	g++ -c Cave.cpp -std=c++11

PokeCenter.o: PokeCenter.cpp
	g++ -c PokeCenter.cpp -std=c++11

Brock.o: Brock.cpp
	g++ -c Brock.cpp -std=c++11

Misty.o: Misty.cpp
	g++ -c Misty.cpp -std=c++11

Player.o: Player.cpp
	g++ -c Player.cpp -std=c++11

Backpack.o: Backpack.cpp
	g++ -c Backpack.cpp -std=c++11

Items.o: Items.cpp
	g++ -c Items.cpp -std=c++11

Menu.o: Menu.cpp
	g++ -c Menu.cpp -std=c++11

Party.o: Party.cpp
	g++ -c Party.cpp -std=c++11

clean:
	rm *.o output
