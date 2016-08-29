/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapTransitPointFinder : GEOMapRequest {
    struct { 
        double x; 
        double y; 
    }  _centerPoint;
    double  _mapRadius;
    unsigned long long  _parentID;
    unsigned long long  _pointID;
    GEOMapTileFinder * _tileFinder;
}

@property (nonatomic, readonly) GEOMapAccess *map;

- (void)_validatePoint:(struct { struct { id x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; bool x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; struct { float x_3_1_1; float x_3_1_2; } x3; struct { /* ? */ } *x4; float x5; unsigned int x6; unsigned char x7; bool x8; bool x9; }*)arg1 rect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 localSearch:(struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })arg3 validPointHandler:(id /* block */)arg4;
- (void)cancel;
- (void)dealloc;
- (void)findTransitPointsOfType:(unsigned long long)arg1 nodeHandler:(id /* block */)arg2 accessPointHandler:(id /* block */)arg3;
- (id)initWithMap:(id)arg1 approxLocation:(struct { double x1; double x2; })arg2 parentID:(unsigned long long)arg3;
- (id)initWithMap:(id)arg1 approxLocation:(struct { double x1; double x2; })arg2 pointID:(unsigned long long)arg3;
- (id)initWithMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
- (id)map;

@end