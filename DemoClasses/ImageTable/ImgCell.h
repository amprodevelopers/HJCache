//
//  ImgCell.h
//  hjlib
//
//  Created by markj on 1/25/10.
//  Copyright 2010 Mark Johnson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HJManagedImageV.h"


@interface ImgCell : UITableViewCell {

	IBOutlet UILabel* text1;
	IBOutlet HJManagedImageV* img;
	
}

@property (nonatomic, strong) UILabel* text1;
@property (nonatomic, strong) HJManagedImageV* img;


@end
