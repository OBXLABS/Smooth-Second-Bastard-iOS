//
//  OKTextObject.h
//  Smooth
//
//  Created by Christian Gratton on 11-06-28.
//  Copyright 2011 Christian Gratton. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OKTessFont.h"

@interface OKTextObject : NSObject
{
    NSString *text;
    NSMutableArray *sentenceObjects;
    
    float width;
    float height;
    float x;
    float y;
    
    CGSize canvas;
    
    OKPoint touchPoint;
    OKPoint multitouchPoint;
    BOOL unspool;
    BOOL multitouch;
    
    OKTessFont *tessFont;
}

@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSMutableArray *sentenceObjects;

- (id) initWithText:(NSString*)aText withFont:(OKTessFont*)aFont andCanvasSize:(CGSize)aSize;

- (void) setWidth:(float)aWidth;
- (void) setHeight:(float)aHeight;
- (void) setX:(float)aX;
- (void) setY:(float)aY;

- (void) setPosition:(OKPoint)aPoint;

- (float) getWitdh;
- (float) getHeight;
- (float) getX;
- (float) getY;

- (void) drawText;
- (void) drawSentences;
- (void) detachChars;

- (void) setAbsPos;

@end
