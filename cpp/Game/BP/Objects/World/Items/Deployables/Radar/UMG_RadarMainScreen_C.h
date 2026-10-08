// /Game/BP/Objects/World/Items/Deployables/Radar/UMG_RadarMainScreen.UMG_RadarMainScreen_C
// Derives from: UUMG_RadarMainScreenBase_C > UIcarusMapScreenBase > UUserWidget > UWidget > UVisual > UObject
// size 0x6D8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RadarMainScreen_C : public UUMG_RadarMainScreenBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* ButtonMapCombined;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* ButtonMapTopo;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* ButtonMapVisual;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* CenterMapButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* DepositLocationsPanel;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_3;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_4;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_5;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_6;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_7;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_8;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_9;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_10;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_11;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_12;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_13;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_14;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_546;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_714;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_729;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* legendActiveArea;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* legendBuilding;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* LegendCompletedArea;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* legendDowned;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* legendDropship;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* legendemptytiles;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* legendgoodtiles;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LegendGradientShadow;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LegendGradientShadow_1;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* legendGravestone;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* legendMeta;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* legendplayer;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* legendRadar;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* MapRadarCanvas;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* MapSpaceCanvas_1;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* MapTileUniformGrid_Heightmap;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* MapTileUniformGrid_Visual;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* MapZoomScaleBox;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* ObjectiveListSizeBox;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* OutOfBoundsImage;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* RadarHeatmapImage;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* RadarLocationsPanel;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RetainerBox_190;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* TileCanvas;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* ToggleRadarButton;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* TranslationCanvas;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TranslationCanvasBackgroundcolor;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TranslationCanvasBackgroundPattern;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectObjectiveList_C* UMG_ProspectObjectiveList;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RadarMapGrid_C* UMG_RadarMapGrid;  // 0x0410, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_IcarusLinkedActorPanel_C*> RadarLocationWidgets;  // 0x0418, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_IcarusLinkedActorPanel_C*> DepositLocationWidgets;  // 0x0428, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AMapManager_C* MapManager;  // 0x0438, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_RadarIcon_C* debugmarker;  // 0x0440, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_IcarusLinkedActorPanel_C*> PlayerLocationWidgets;  // 0x0448, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_IcarusLinkedActorPanel_C*> UnsortedActorLocationWidgets;  // 0x0458, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_RadarSquare_C*> ScannedRadarTiles;  // 0x0468, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_RadarSquare_C*> RadarRadius;  // 0x0478, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_RadarSquare_C*> OrphanedScannedRadarTiles;  // 0x0488, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_IcarusLinkedActorPanel_C*> DropshipLocationWidgets;  // 0x0498, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_IcarusLinkedActorPanel_C*> GraveLocationWidgets;  // 0x04A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_IcarusLinkedActorPanel_C*> GridLocationWidgets;  // 0x04B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_IcarusLinkedActorPanel_C*> WaypointLocationWidgets;  // 0x04C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MapIconGlobalSizeMultiplier;  // 0x04D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MapIconGlobalMinSizeClamp;  // 0x04DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MapIconGlobalMaxSizeClamp;  // 0x04E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MapMaxZoomOut;  // 0x04E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MapMaxZoomIn;  // 0x04E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<MapIconsStruct> MapIconSettings;  // 0x04F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FirstTimeOpenZoom;  // 0x0500, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* RadarHeatmapMaskDMI;  // 0x0508, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* RadarHeatmapMetaLayerDMI;  // 0x0510, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShiftIsDown;  // 0x0518, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CtrlIsDown;  // 0x0519, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AltIsDown;  // 0x051A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 V2ScansProcessed;  // 0x051C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MapTickedOnce;  // 0x0520, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 V3ScansProcessed;  // 0x0524, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_RadarSquare_C*> RadarV3Radius;  // 0x0528, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MapZoomRateOfChange;  // 0x0538, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UObject*, UUMG_QuestWidget_C*> QuestWidgetMap;  // 0x0540, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Purple;  // 0x0590, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ContextMenuCachedWorldLocation;  // 0x05B8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector MouseDownCachedWorldLocation;  // 0x05C4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DragOperationOccurred;  // 0x05D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TileSize;  // 0x05D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* FowMaskDMI;  // 0x05D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* AsyncOOBImageCache;  // 0x05E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UGameplayTexture> FullBoundsGameplayTexture;  // 0x05E8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_RadarSquare_C*> QuestCircles;  // 0x0610, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GameTimeOfLastTick;  // 0x0620, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MapIconGlobalSizeMultiplierNew;  // 0x0624, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ContextMenuHeadingText;  // 0x0628, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> PendingFOWDrawLocations;  // 0x0640, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> OldFOWDrawLocations;  // 0x0650, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NeedsUpdate;  // 0x0660, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor SearchAreaColor;  // 0x0664, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSearchAreaAdded SearchAreaAdded;  // 0x0678, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FVector2D, FVector2D> LinkedActorPathsToDraw;  // 0x0688, size 0x50

    UFUNCTION(BlueprintCallable) void AddMarkersForAllActorsWithIcon(TSubclassOf<AActor> ActorClass, UObject* NewImage, TArray<UUMG_IcarusLinkedActorPanel_C*>& NewWidgets, UImage*& IconImage);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void AddQuestSearchArea(float Radius, FVector WorldSpaceCenter, AIcarusActor* Actor, UTexture2D* TextureOverride, FLinearColor Specified_Color, UUMG_RadarSquare_C*& Widget);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void BatchDrawFOW(float DrawSizeOverride);  // parameters 0x4
    UFUNCTION() void BndEvt__ButtonMapCombined_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__ButtonMapTopo_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__ButtonMapVisual_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__CenterMapButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__ToggleRadarButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CanSeeOwnLocation(bool& HasStat);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CanUseRadar(bool& HasStat);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CanUseTopoMap(bool& HasStat);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CanUseVisualMap(bool& HasStat);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CompletedRadarTileCleanup(ABP_Radar_C* CompletedRadar);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ConfigureMapIconSettings();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void ContextMenuCopyGridLocation(FName ItemIdentifier, int32 ItemPayload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void ContextMenuSetGridLocation(FName ItemIdentifier, int32 ItemPayload);  // parameters 0xC
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION() void ExecuteUbergraph_UMG_RadarMainScreen(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FakeMeta(FLinearColor In_2);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void FlushRadarScans();
    UFUNCTION(BlueprintCallable) void GenerateFOWDrawLocations();
    UFUNCTION(BlueprintCallable) FMinimapData GetMinimapData(bool& Valid);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void GetMouseWorldLocation(FVector& World_Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void HideAllMaps();
    UFUNCTION(BlueprintCallable) void IconStatCheck();
    UFUNCTION(BlueprintCallable) void InitCompletedRadarSquares();
    UFUNCTION(BlueprintCallable) void InitObjectiveList();
    UFUNCTION(BlueprintCallable) void InitRadarV2();
    UFUNCTION(BlueprintCallable) void InitScannedRadarSquares();
    UFUNCTION(BlueprintCallable) void InitTileSize();
    UFUNCTION(BlueprintCallable) void InitialiseOutOfBoundsImage();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsMapOpen(bool& Open);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LoadHeightmapsIntoMapTiles();
    UFUNCTION(BlueprintCallable) void LoadVisualmapsIntoMapTiles();
    UFUNCTION(BlueprintCallable) void MapCanvasSpaceToWorldSpace(FVector2D MapLocation, FVector& World_Location);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void Moved_Translation_Canvas_to_World_Location(FVector WorldLocation);  // parameters 0xC, named "Moved Translation Canvas to World Location"
    UFUNCTION(BlueprintCallable) void NewScanCheck();
    UFUNCTION(BlueprintCallable) void OffsetLabels(TArray<UUserWidget*>& IconWidgets);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable) void OnLoaded_170E4BB94C9E0BCCC204CD833F0BCCC2(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) void OnPaint(FPaintContext& Context) const;  // parameters 0x30
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RadarCircleRadiusUpdate(int32 X, int32 Y, int32 Radius, FVector WorldSpaceTileCenter, ABP_Radar_C* Radar);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void RadarSquareRadiusUpdate(int32 X, int32 Y, int32 Radius, FVector WorldSpaceTileCenter, ABP_Radar_C* Radar);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void RadarV2MaskReveal(FVector WorldLocation, float KMradius, float Intensity);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void ReinitMap();
    UFUNCTION(BlueprintCallable) void RemoveQuestSearchArea(UUMG_RadarSquare_C* SearchArea);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Rotate_Player_Widgets(TArray<UUMG_IcarusLinkedActorPanel_C*>& Player_Icons);  // parameters 0x10, named "Rotate Player Widgets"
    UFUNCTION(BlueprintCallable) void RotateMapIcon(UUserWidget* IconWidget, AActor* LinkedActor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SearchAreaAdded__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ShowCombinedMap();
    UFUNCTION(BlueprintCallable) void ShowHeightmap();
    UFUNCTION(BlueprintCallable) void ShowVisualMap();
    UFUNCTION(BlueprintCallable) void StatBindings();
    UFUNCTION(BlueprintCallable) void StatsUpdated();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void TileScannedUpdate(int32 X, int32 Y, EMapTileRadarFlag Flag, FVector WorldSpaceTileCenter, ABP_Radar_C* LinkedRadar);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void ToggleRadarDisplay();
    UFUNCTION(BlueprintCallable) void UpdateFogOfWarVisibility();
    UFUNCTION(BlueprintCallable) void UpdateIcon(UUserWidget* IconWidget, AActor* LinkedActor, bool ShouldRotate, float ScaleFactor);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateLinkedActorWidgetsLocations(UUserWidget* LinkedActorWidget, AActor* LinkedActor, bool ScaleIcon, float ScaleFactor);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateMapIcons();
    UFUNCTION(BlueprintCallable) void UpdateRadarWidgets();
    UFUNCTION(BlueprintCallable) void UpdateViewForStats();
    UFUNCTION(BlueprintCallable) void ValidateMapView();
    UFUNCTION(BlueprintCallable) void WorldSpaceToMapCanvasSpace(FVector WorldLocation, FVector2D& MapLocation);  // parameters 0x14
};
