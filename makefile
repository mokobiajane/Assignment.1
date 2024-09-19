TARGET = main 

all:: $(TARGET)


$(TARGET): main.cpp
	g++ -o $(TARGET) main.cpp


clean:
	rm -rf $(TARGET)
