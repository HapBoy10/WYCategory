//
//  WYNSCategory.h
//  WYNSCategory
//
//  Created by 3TI on 13-11-30.
//  Copyright (c) 2013年 qiaquan. All rights reserved.
//

#ifndef WYNSCategory_WYNSCategory_h
#define WYNSCategory_WYNSCategory_h

#import "NSString+Category.h"
#import "NSData+Category.h"

#define DLog(Tm, ...) NSLog((@"%s" "[line:%d]" Tm),__FUNCTION__, __LINE__, ##__VA_ARGS__);

#endif
