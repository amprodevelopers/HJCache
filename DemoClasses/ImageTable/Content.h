//
//  Content.h
//  hjlib
//
//  Created by markj on 1/25/10.
//  Copyright 2010 Mark Johnson. All rights reserved.
//

#import <Foundation/Foundation.h>




@interface Content : NSObject {

	NSString* contentID;
	NSString* text;
	NSURL* imgURL;
	NSString* imgID;

	
}

@property (nonatomic, strong) NSString* contentID;
@property (nonatomic, strong) NSString* text;
@property (nonatomic, strong) NSURL* imgURL;
@property (nonatomic, strong) NSString* imgID;


+(Content*) makeNextContent;


@end
