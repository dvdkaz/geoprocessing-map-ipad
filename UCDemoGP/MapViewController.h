//
//  ViewController.h
//  UCDemoGP
//
//  Created by Al Pascual on 7/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ArcGIS/ArcGIS.h>
#import <AudioToolbox/AudioToolbox.h>

#import "EditGraphicViewController.h"
#import "GraphViewController.h"


@protocol MapViewDelegate <NSObject>

- (void) killed;

@end

@interface MapViewController : UIViewController <AGSMapViewLayerDelegate,AGSMapViewTouchDelegate,EditGraphicDelegate,AGSGeoprocessorDelegate,GraphDelegate,UIAlertViewDelegate>

@property (nonatomic,strong) IBOutlet AGSMapView *mainMapView;
@property (nonatomic,strong) UIView *baseView;
@property (nonatomic,strong) UIView *topView;
@property (nonatomic,strong) AGSFeatureLayer *editableFeatureLayer;
@property (nonatomic,strong) AGSDynamicMapServiceLayer *dynamicLayer;
@property (nonatomic,strong) AGSSketchGraphicsLayer * sketch;
@property (nonatomic,strong) AGSGeoprocessor *geoprocess;
@property (nonatomic,strong) AGSGeoprocessor *geoprocessWaterShed;
@property (nonatomic,strong) AGSGeoprocessor *geoprocessDetails;
@property (nonatomic,strong) AGSDynamicMapServiceLayer *resultDynamicLayer;
@property (nonatomic,strong) AGSPolygon *lastWaterShedPolygon;
@property (nonatomic,strong) AGSGraphicsLayer *graphicsLayer;
@property (nonatomic,strong) IBOutlet UIImageView *imageView;
@property (nonatomic) CGAffineTransform originalTransform; 
@property (nonatomic,strong) UIPopoverController *popup;
@property (nonatomic) CGPoint lastScreen;
@property (nonatomic, strong) NSMutableArray *addedFeaturesArray;
@property (nonatomic, strong) UIImageView *activityImageView;
@property (nonatomic) double dSetMapScale;
@property (nonatomic) BOOL bZoomingToPolygon;
@property (nonatomic,strong) id <MapViewDelegate> delegate;
@property (nonatomic) CGFloat originalWidth;



- (void)toggleShowingBasemaps:(CGFloat)width;
- (void) showSwirlyProcess;
- (void) hideSwirlyProcess;
- (void) resetMaps;
- (void) showChartWithGraphic:(AGSGraphic *)polyGraphic;

@end
