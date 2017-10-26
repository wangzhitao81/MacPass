//
//  MPDayCountFormatter.h
//  MacPass
//
//  Created by Michael Starke on 15.10.17.
//  Copyright © 2017 HicknHack Software GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MPDayCountFormatter : NSFormatter

@property (copy) NSString *valueFormat; // Supply this to override the defualt format for all values not 0. Default will localized "%ld_DAYS"

@end
