//
//  BreakableObject.h
//  BounceCat
//
//  Created by Ivan on 3/18/13.
//
//

#define calculate_determinant_2x2(x1,y1,x2,y2) x1*y2-y1*x2
#define calculate_determinant_2x3(x1,y1,x2,y2,x3,y3) x1*y2+x2*y3+x3*y1-y1*x2-y2*x3-y3*x1

#import "PolygonSprite.h"
#import "CommonClassMembers.h"

@interface BreakableSprite : PolygonSprite {
    b2World *world;
}

- (void)splitPolygonSpriteOnLayer:(CCLayer*)levelLayer beginCutPoint:(b2Vec2)beginCutPoint endCutPoint:(b2Vec2)endCutPoint;
- (id)initWithWorld:(b2World *)instanceWorld;

@end
