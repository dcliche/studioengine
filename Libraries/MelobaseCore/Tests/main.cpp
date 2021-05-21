//
//  main.cpp
//  MelobaseCoreTest
//
//  Created by Daniel Cliche on 2021-02-01.
//  Copyright (c) 2021 Daniel Cliche. All rights reserved.
//

#include <platform.h>

#include <iostream>

#include "tests.h"

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <test name>\n";
        return EXIT_FAILURE;
    }

    std::string pasteboardContent;

    MDStudio::Platform::sharedInstance()->setSetPasteboardContentFn(
        [&pasteboardContent](const std::string& content) { pasteboardContent = content; });
    MDStudio::Platform::sharedInstance()->setGetPasteboardContentFn(
        [&pasteboardContent]() { return pasteboardContent; });

    if (!executeTest(argv[1])) return EXIT_FAILURE;

    std::cout << "Success!\n";

    return EXIT_SUCCESS;
}
