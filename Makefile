CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

SRC      = src/twosum.cpp
BUILD    = build

all: $(BUILD)/twosum

$(BUILD)/twosum: src/main.cpp $(SRC) src/twosum.h | $(BUILD)
	$(CXX) $(CXXFLAGS) src/main.cpp $(SRC) -o $@

$(BUILD)/test_twosum: tests/test_twosum.cpp $(SRC) src/twosum.h | $(BUILD)
	$(CXX) $(CXXFLAGS) tests/test_twosum.cpp $(SRC) -o $@

$(BUILD):
	mkdir -p $(BUILD)

test: $(BUILD)/test_twosum
	./$(BUILD)/test_twosum

clean:
	rm -rf $(BUILD)

.PHONY: all test clean
