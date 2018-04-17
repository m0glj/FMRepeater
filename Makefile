CXX     = g++
CFLAGS  = -g -O3 -Wall -std=c++0x -pthread
LIBS    = -lpthread -lasound
LDFLAGS = -g

OBJECTS = ArduinoController.o AudioDelay.o Config.o CWKeyer.o DummyController.o ExternalController.o FIRFilter.o \
	  FMRepeater.o FMRepeaterThread.o Goertzel.o HardwareController.o  NCO.o PTTDelay.o SerialDataController.o \
	  SoundCardReaderWriter.o StopWatch.o Thread.o TimeoutTones.o Timer.o UDRCController.o

all:		FMRepeater

FMRepeater:	$(OBJECTS)
		$(CXX) $(OBJECTS) $(CFLAGS) $(LIBS) -o FMRepeater

%.o: %.cpp
		$(CXX) $(CFLAGS) -c -o $@ $<

clean:
		$(RM) FMRepeater *.o *.d *.bak *~

