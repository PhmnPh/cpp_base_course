/*
    Пользователь вводит объем флешки в ГБ. Определить, сколько поместится
   фильмов (760 МБ), клипов (95 МБ), песен (7 МБ) и документов (350 КБ). Файлы
   записываются по очереди: сначала фильмы, затем клипы, музыка и документы.
*/

#include <iostream>

int main() {

    int flashSize;

    int const film_size = 760 * 1024;
    int const clip_size = 95 * 1024;
    int const music_size = 7 * 1024;
    int const doc_size = 350;

    // Convert everything to kb. 1 mb equals to 1024 kb -> 1 gb = 1024^2 kb
    std::cin >> flashSize;

    long long data_kb = flashSize * 1024LL * 1024;

    // Calculate films amount and kb left
    int films = data_kb / film_size;
    data_kb = data_kb % film_size;

    // Calculate clip amount and kb left
    int clips = data_kb / clip_size;
    data_kb = data_kb % clip_size;

    // Calculate songs and kb left
    int songs = data_kb / music_size;
    data_kb = data_kb % music_size;

    // Calculate docs and kb left
    int docs = data_kb / doc_size;

    // Print amoungs
    std::cout << films << " " << clips << " " << songs << " " << docs << std::endl;
}
