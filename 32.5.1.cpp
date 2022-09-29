#include <iostream>
#include <fstream>
#include "nlohmann/json.hpp"


int main()
{
    std::ofstream file("film.json");
    nlohmann::json myJSON = {
        {"name",     "Legends of the Fall"},

        {"country",  "United States of America"},

        {"released",  "December 23, 1994 (US)"},

        {"studio",  {"TriStar Pictures","The Bedford Falls Company"}},
                     

        {"screenplay by",   {"Susan Shilliday","William D. Wittliff"}},
                      

        {"director",    "Edward Zwick"},

        {"producer", {"Marshall Herskovitz",
                      "William D. Wittliff"}},

        {"starring", {"Brad Pitt",
                      "Anthony Hopkins",
                      "Aidan Quinn",
                      "Julia Ormond",
                      "Henry Thomas"}},
    };

    file << myJSON;
}
