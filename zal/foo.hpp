//#pragma once
//
//#include "Human.hpp"
//
//#include <algorithm>
//#include <list>
//#include <vector>
//
//std::vector< char > foo(std::list< Human >& people)
//{
//    std::vector< char > ret_v(people.size());
//
//    // Twoja implementacja tutaj
//
//    return ret_v;
//}
#pragma once

#include "Human.hpp"

#include <algorithm>
#include <functional>
#include <iostream>
#include <list>
#include <string>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > isAnimalLover;

    // std::for_each(people.begin(), people.end(), std::mem_fun(Human::birthday));
    std::for_each(people.begin(), people.end(), [](Human& a) { a.birthday(); });
    // std::transform(people.begin(), people.end(), isAnimalLover.begin(),
    // isAnimalLover.push_back(function(mem_fun))); std::for_each(people.begin(), people.end(),
    // isAnimalLover.push_back(function()));
    std::for_each(people.begin(), people.end(), [&b = isAnimalLover](Human a) {
        if (a.isMonster() == true) {
            b.push_back('n');
        }
        else {
            b.push_back('y');
        }
    });
    std::reverse(isAnimalLover.begin(), isAnimalLover.end());
    // Twoja implementacja tutaj
    return isAnimalLover;
}
