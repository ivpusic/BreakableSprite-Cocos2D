//
//  PolygonSprite.h
//  CutCutCut
//
//  Created by Allen Benson G Tan on 5/20/12.
//  Copyright 2012 WhiteWidget Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "Box2D.h"
#import "PRFilledPolygon.h"
#import "CommonClassMembers.h"

@interface PolygonSprite : PRFilledPolygon {
    b2Body *_body;
    BOOL _original;
    b2Vec2 _centroid;
    BOOL _sliceEntered;
    BOOL _sliceExited;
    b2Vec2 _entryPoint;
    b2Vec2 _exitPoint;
    double _sliceEntryTime;
}

@property(nonatomic,assign)b2Body *body;
@property(nonatomic,readwrite)BOOL original;
@property(nonatomic,readwrite)b2Vec2 centroid;
@property(nonatomic,readwrite)b2Vec2 entryPoint;
@property(nonatomic,readwrite)b2Vec2 exitPoint;
@property b2Fixture *polygonSpriteFixture;



- (id)initWithTexture:(CCTexture2D*)texture body:(b2Body*)body original:(BOOL)original;
- (id)initWithFile:(NSString*)filename body:(b2Body*)body original:(BOOL)original;
+ (id)spriteWithFile:(NSString*)filename body:(b2Body*)body original:(BOOL)original;
+ (id)spriteWithTexture:(CCTexture2D*)texture body:(b2Body*)body original:(BOOL)original;
- (b2Body*)createBodyForWorld:(b2World*)world position:(b2Vec2)position rotation:(float)rotation vertices:(b2Vec2*)vertices vertexCount:(int32)count density:(float)density friction:(float)friction restitution:(float)restitution;




@end
