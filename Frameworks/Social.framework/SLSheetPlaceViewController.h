//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MKMapViewDelegate.h"
#import "SLPlaceDataSourceDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ACAccount, MKMapView, NSArray, NSBundle, NSObject<SLPlaceDataSource>, NSObject<SLSheetPlaceViewControllerDelegate>, NSString, SLPlace, SLSheetPlaceSearchController, UISearchBar, UISearchDisplayController, UITableView;

@interface SLSheetPlaceViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate, MKMapViewDelegate, SLPlaceDataSourceDelegate>
{
    NSArray *_places;
    SLPlace *_selectedPlace;
    NSBundle *_effectiveBundle;
    UITableView *_tableView;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    SLSheetPlaceSearchController *_placeSearchController;
    MKMapView *_mapView;
    BOOL _searchPresented;
    BOOL _searchAnimationComplete;
    float _mapHeight;
    BOOL _searchEnabled;
    NSObject<SLSheetPlaceViewControllerDelegate> *_selectionDelegate;
    ACAccount *_account;
    NSObject<SLPlaceDataSource> *_placeDataSource;
}

@property(retain) ACAccount *account; // @synthesize account=_account;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void).cxx_destruct;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)dealloc;
@property(retain) NSObject<SLPlaceDataSource> *placeDataSource; // @synthesize placeDataSource=_placeDataSource;
@property __weak NSObject<SLSheetPlaceViewControllerDelegate> *selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
- (void)cancelButtonTapped:(id)arg1;
- (void)setSelectedPlace:(id)arg1;
- (id)initWithPlaceDataSource:(id)arg1 effectiveBundle:(id)arg2;
- (id)_placeForRow:(int)arg1;
@property(retain) NSArray *places; // @dynamic places;
- (CDStruct_90e2a262)_regionForPlaces:(id)arg1;
- (void)_centerMapForPlaces;
- (BOOL)_forceSelectPlace:(id)arg1 setMapAnnotation:(BOOL)arg2;
@property(nonatomic) BOOL searchEnabled; // @synthesize searchEnabled=_searchEnabled;
- (void)_restoreFromSearch;
- (void)_presentSearch;
- (void)_layoutForSearch;
- (void)_layoutNormal;
- (float)_preferredViewHeight;
- (float)_mapHeightForInterfaceOrientation:(int)arg1;
- (void)_calculatePreferredContentSize;
- (void)_centerMapWithSelectedPlace:(id)arg1;
- (void)placeManager:(id)arg1 updatedPlaces:(id)arg2;
- (void)placeManager:(id)arg1 failedWithError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
