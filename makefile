default:
	g++ *.cpp -std=c++11 -o exe

run:
	g++ -I ./classes *.cpp classes/*.cpp -std=c++11 -o driver.exe
	./exe
