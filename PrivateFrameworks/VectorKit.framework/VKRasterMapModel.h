//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKMapTileModel.h>

#import "VKMapLayer.h"

@class NSMutableArray, NSString;

@interface VKRasterMapModel : VKMapTileModel <VKMapLayer>
{
    NSMutableArray *_sortedTiles;
    unsigned long long _mapLayer;
    BOOL _rasterViewer;
    BOOL _showingNoDataPlaceholders;
    shared_ptr_6e6219d6 _styleQuery;
    shared_ptr_479d1306 _gglClutTexture;
    struct Pos2DUVMesh *_unitMesh;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _renderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _clutRenderState;
}

+ (BOOL)reloadOnStylesheetChange;
- (void)gglSetupClutTextureForLevelOfDetail:(unsigned int)arg1 scale:(float)arg2;
@property(nonatomic) BOOL rasterViewer; // @synthesize rasterViewer=_rasterViewer;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3 roadAlpha:(float)arg4;
- (BOOL)shouldEnableCLUT;
@property(nonatomic) unsigned long long mapLayerPosition;
- (void)stylesheetDidChange;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (id)styleManager;
@property(readonly, getter=isShowingNoDataPlaceholders) BOOL showingNoDataPlaceholders; // @synthesize showingNoDataPlaceholders=_showingNoDataPlaceholders;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
