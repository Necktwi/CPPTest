//
//  testCPPPriv.hpp
//  testCPP
//
//  Created by Gowtham Kudupudi on 23/05/18.
//  Copyright © 2018 ferryfair. All rights reserved.
//

/* The classes below are not exported */
#pragma GCC visibility push(hidden)

class testCPPPriv
{
    public:
    void HelloWorldPriv(const char *);
};

#pragma GCC visibility pop
