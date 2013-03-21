BreakableSprite-Cocos2D
=======================

Make breakable sprite with texture and physics (Box2D), and cut sprite at two specified points

First what you need is to import "BreakableSpriteCore" and "PRKit" folders in your project. I have made for testing
purposes of this project, class called BoxCover. In that class is example of initialisation 
BreakableSprite object. You first must create b2Body, then load texture, and finally pass created body and texture 
to method for creating and initializing BreakalbeSprite. Example of this is located in BoxCover.mm file.

In mainLayer which uses BoxCover class, you can create class object in this way:
```
BoxCover *cover = [[BoxCover alloc] initWithLayer:levelLayer world:levelWorld withPosition:initPosition];
```

After doing this you can "cut" object in following way:
```
[cover splitPolygonSpriteOnLayer:levelLayer beginCutPoint:b2Vec2(1,0.9) endCutPoint:b2Vec2(1,0.94)];
```
After this, body will be cutted at points specified with parameters "beginCutPoint" and "endCutPoint"

For any questions you can contact me on mail: pusic007@gmail.com


