/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKRectangularAnnotationEventHandler : AKAnnotationEventHandler

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectForModifiedRotatedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withOriginal:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 andRotation:(float)arg3;
- (void)_updateModelFlippednessWithCurrentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)getInitialDraggedPoint:(struct CGPoint { float x1; float x2; }*)arg1 otherPoint:(struct CGPoint { float x1; float x2; }*)arg2 center:(struct CGPoint { float x1; float x2; }*)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;
- (void)setupDraggingConstraints;
- (void)updateModelWithCurrentPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
