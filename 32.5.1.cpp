#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "nlohmann/json.hpp"

struct Movie
{
    std::string name,country,released,director;
    std::vector <std::string> screenplay,studio,producer, starring;
};


int main()
{
    Movie movie;
    movie.name = "Legends of the Fall";
    movie.country = "United States of America";
    movie.released = "December 23, 1994 (US)";
    movie.studio = {"TriStar Pictures", "The Bedford Falls Company"};
    movie.screenplay = { "Susan Shilliday", "William D. Wittliff"};
    movie.director = "Edward Zwick";
    movie.producer = {"Marshall Herskovitz","William D.Wittliff"};
    movie.starring = {"Brad Pitt", "Anthony Hopkins", "Aidan Quinn","Julia Ormond",
                      "Henry Thomas"};
    std::ofstream file("film.json");
    nlohmann::json myJSON = 
    {
        {"name",     movie.name},
        {"country",  movie.country},
        {"released", movie.released },
        {"studio",   movie.studio},
        {"screenplay by", movie.screenplay},
        {"director", movie.director},
        {"producer", movie.producer},
        {"starring", movie.starring}
    };

    file << myJSON;
}
