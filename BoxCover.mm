//
//  BoxCover.m
//  BounceCat
//
//  Created by Ivan on 3/19/13.
//
//

#import "BoxCover.h"

@implementation BoxCover

- (id) initWithLayer:(CCLayer *)levelLayer world:(b2World*)instanceWorld withPosition:(b2Vec2)startPosition
{
    // world member defined in BreakableSprite.h class
    world = instanceWorld;
    
    NSString *file = @"teeterpe.png";
    CCTexture2D *texture = [[CCTextureCache sharedTextureCache] addImage: file];
    
    int32 count = 4;
    b2Vec2 verts[] = {
        b2Vec2(0.000 / PTM_RATIO, 29.000 / PTM_RATIO),
        b2Vec2(64.000 / PTM_RATIO, 29.000 / PTM_RATIO),
        b2Vec2(64.000 / PTM_RATIO, 36.000 / PTM_RATIO),
        b2Vec2(0.000 / PTM_RATIO, 36.000 / PTM_RATIO)
    };
    
    b2Body *body = [self createBodyForWorld:world position:b2Vec2((startPosition.x - (texture.contentSizeInPixels.width / 3)) / PTM_RATIO, startPosition.y / PTM_RATIO) rotation:0 vertices:verts vertexCount:count density:5.0 friction:0.2 restitution:0.2];
    
    if (self = [super initWithTexture:texture body:body original:YES]) {
        [levelLayer addChild:self];
    }
    
    return self;
}

@end
