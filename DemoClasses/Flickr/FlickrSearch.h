//
//  FlickrDownload.h
//  Postcard
//
//  Created by markj on 2/16/09.
//  Copyright 2009 Mark Johnson. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface FlickrSearch : NSObject <NSXMLParserDelegate> {

	NSMutableArray* searchResults;
	NSMutableArray* imageURLs;
	NSMutableArray* imageTitles;
	NSMutableArray* thumbnailViews;
	NSMutableArray* owners;
	NSXMLParser* parser;
	
}

@property (nonatomic, strong) NSMutableArray* searchResults;
@property (nonatomic, strong) NSXMLParser* parser;

- (void) imageSearch:(NSString*)searchString;


@end
