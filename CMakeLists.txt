cmake_minimum_required(VERSION 3.0)
project(Blackjack)

set(CMAKE_CXX_STANDARD 14)


set(SOURCES
        src/dealer.cpp
        src/human.cpp
        src/blackjack.cpp
        src/player.cpp
        src/card.cpp
        src/deck.cpp
        src/print.cpp
        src/game.cpp
        src/statistics.cpp
        )


add_executable(blackjack ${SOURCES})


target_include_directories(blackjack PRIVATE include)
