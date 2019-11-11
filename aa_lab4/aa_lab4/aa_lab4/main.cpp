//
//  main.cpp
//  aa_lab4
//
//  Created by Антон Тимонин on 11.11.2019.
//  Copyright © 2019 Антон Тимонин. All rights reserved.
//

#include <iostream>
#include <thread>

void DoWork()
{
    for (size_t i = 0; i < 20; i++){
        std::cout << "ID thread = " << std::this_thread::get_id() << "\tDoWork\t" << i << std::endl;
    }
}


int main(int argc, const char * argv[]) {
    
    std::thread thr(DoWork);
    
    
    for (size_t i = 0; i < 10; i++) {
        std::cout << "ID thread = " << std::this_thread::get_id() << "\tmain\t" << i << std::endl;
    }
    
    thr.join();
    return 0;
}
