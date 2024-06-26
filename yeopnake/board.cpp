#include "board.hpp"

namespace snake{
    char stage[5][21][39] = {
           {{'#','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','#'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'#','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','#'}},
            //                                                                        18  19  20                                                                          
           {{'#','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','#'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','+','+','+','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},// 가운데
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'#','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','#'}},
//                                                                                    18 19 20    21  22  23  24  25  26  27  28  29  30  31  32  33 34  35  36  37  38
           {{'#','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','#'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','+','+','+','+','+','+','+','0','0','0','0','0','+','+','+','+','+','+','+','0','0','0','0','0','0','0','0','0','+'},// 1/4
            {'+','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},// 가운데
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','+','+','+','+','+','+','+','0','0','0','0','0','+','+','+','+','+','+','+','0','0','0','0','0','0','0','0','0','+'},// 3/4
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'#','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','#'}},
//                                                                                    18 19 20    21  22  23  24  25  26  27  28  29  30  31  32  33 34  35  36  37  38            
           {{'#','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','#'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},// 1/4
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','+','+','+','+','+','+','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','+','+','+','+','+','+','+'},//가운데
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},// 3/4
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'#','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','#'}},

            {{'#','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','#'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'+','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','+'},
            {'#','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','+','#'}}
    };

    // 생성자 호출하면 21 39 크기의 gameBoard 만듬
    Board::Board()
    {
        // stdscr의 최대 높이, 최대 너비를 구한다
        getmaxyx(stdscr, yMax, xMax);
        // 21 39 크기의 창을 만들되, 중앙에 생성하도록 한다
        gameBoard = newwin(21, 39, (yMax / 2)-10, (xMax / 2)-19);
        scoreBoard = newwin(10,25, (yMax / 2)-10,(xMax / 2)+25);
        missionBoard = newwin(10, 25, (yMax / 2)+1, (xMax / 2)+25);
        wtimeout(gameBoard, 300);
    }

    // 초기화 함수
    void Board::initialize(int num)
    {
        // 일단 gameBoard 클리어를 한다
        wclear(gameBoard);
        wclear(scoreBoard);
        wclear(missionBoard);

        stageNum = num;


        // stage의 첫번째 맵을 그대로 가져와서 gameBoard 메모리상에 복사한다
        for (int i = 0; i < 21; i++)
        {
            for (int j = 0; j < 39; j++)
            {
                if (stage[stageNum][i][j] == '0')
                {
                    mvwaddch(gameBoard, i, j, ' ');
                }
                else
                {
                    mvwaddch(gameBoard, i, j, stage[stageNum][i][j]);
                }
            }
        }
    }

    // gameBoard의 메모리상에서 (y, x) 위치에 ch 문자 추가하기
    void Board::add(int y, int x, char ch)
    {
        mvwaddch(gameBoard, y, x, ch);
    }

    // gameBoard의 (y, x) 위치에서의 문자 값 get하기
    char Board::getCharAt(int y, int x)
    {
        return mvwinch(gameBoard, y, x);
    }

    // 입력 값 get하기
    char Board::getInput()
    {
        return wgetch(gameBoard);
    }

    // 현재 게임의 stage 번호 get하기
    int Board::getStageNum()
    {
        return stageNum;
    }

    // 게임 속도 조절하기
    void Board::setTimeout(int tick)
    {
        wtimeout(gameBoard, tick);
    }

    // gameBoard 새로고침
    void Board::refresh()
    {   
        box(scoreBoard, 0, 0);
        box(missionBoard, 0, 0);
        wrefresh(gameBoard);
        wrefresh(scoreBoard);
        wrefresh(missionBoard);
    }

    // 아이템 놓을 수 있는 위치 찾기
    void Board::getItemPos(int &y, int &x)
    {   
        // y, x를 각각 0부터 21까지 랜덤 돌려서 gameBoard의 (y, x)가 공백일 때까지 반복
        // 이때 y, x는 레퍼런스로 받아서 랜덤 돌려질때마다 실질값으로 적용됨
        while((mvwinch(gameBoard, y = rand() % 21, x = rand() % 39)) != ' ');
    }

    void Board::recording(int size, int appleS, int bombS, int warpS, 
        bool sizeC, bool appleC, bool bombC, bool warpC){
        mvwprintw(scoreBoard, 1, 3, "~ Score board ~");
        mvwprintw(scoreBoard, 3, 3, "Size : %d", size);
        mvwprintw(scoreBoard, 4, 3, "Apple : %d", appleS);
        mvwprintw(scoreBoard, 5, 3, "Bomb : %d", bombS);
        mvwprintw(scoreBoard, 6, 3, "Wrap : %d", warpS);

        mvwprintw(scoreBoard, 8, 3, "Stage : %d", stageNum+1);

        mvwprintw(missionBoard, 1, 3, "~ Mission board ~");
        if(sizeC){mvwprintw(missionBoard, 3, 3, "Size : 25/25 ( v )");}
        else{mvwprintw(missionBoard, 3, 3, "Size : %d/25 (  )", size);}
        if(appleC){mvwprintw(missionBoard, 4, 3, "Apple : 30/30 ( v )");}
        else{mvwprintw(missionBoard, 4, 3, "Apple : %d/30 (  )", appleS);}
        if(bombC){mvwprintw(missionBoard, 5, 3, "Bomb : 10/10 ( v )");}
        else{mvwprintw(missionBoard, 5, 3, "Bomb : %d/10 (  )", bombS);}
        if(warpC){mvwprintw(missionBoard, 6, 3, "Wrap : 5/5 ( v )");}
        else{mvwprintw(missionBoard, 6, 3, "Wrap : %d/5 (  )", warpS);}
    }

    int Board::getxMax(){
        return xMax;
    }
    int Board::getyMax(){
        return yMax;
    }
}