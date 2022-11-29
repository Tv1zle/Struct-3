#include <iostream>
#include <string>


struct Film
{
    std::string Name;
    int YearOfPresent;
    float AverageRatings;
    std::string Producer;
    std::string WrittenBy;
    std::string Genre;
    std::string Comments;
};


void FillArray(Film film)
{
    std::cout << "Name of the film:";
    std::cin >> film.Name;
    std::cout << "Year of present the film:";
    std::cin >> film.YearOfPresent;
    std::cout << "Average ratings of the film:";
    std::cin >> film.AverageRatings;
    std::cout << "Producer of the film:";
    std::cin >> film.Producer;
    std::cout << "Written by the film:";
    std::cin >> film.WrittenBy;
    std::cout << "Genre of the film:";
    std::cin >> film.Genre;
    std::cout << "Comments of the film:";
    std::cin >> film.Comments;
}


void ShowArray(Film film)
{
    std::cout << "\n\nName of the film - " << film.Name;
    std::cout << "\nYear of present the film - " << film.YearOfPresent;
    std::cout << "\nAverage ratings of the film - " << film.AverageRatings;
    std::cout << "\nProducer of the film - " << film.Producer;
    std::cout << "\nWritten by the film - " << film.WrittenBy;
    std::cout << "\nGenre of the film - " << film.Genre;
    std::cout << "\nComments of the film - " << film.Comments;
}


int main()
{
    const int size = 5;
    Film array[size];


    for (int i = 0; i < size; i++)
    {
        FillArray(array[i]);
    }


    for (int i = 0; i < size; i++)
    {
        ShowArray(array[i]);
    }
}