// /Game/BP/PlayerMap/MapManager.MapManager_C
// Derives from: AMapManagerBase > AActor > UObject
// size 0x358, a blueprint class, blueprint

UCLASS(Config=Engine)
class AMapManager_C : public AMapManagerBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneCaptureComponent2D* OrthoCapture;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* OrthoCamera;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AActor* MapCameraLocationActor;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 XTileCount;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 YTileCount;  // 0x02DC, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<FMapRow> TileRadarStates;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FIntVector> AdjacencyMatrix;  // 0x02F0, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<AResourceDeposit*> RadarDetectedDeposits;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<FIntVector> PlacedRadarLocations;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<int32> PlacedRadarRadius;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<GlobalEquippableStats> GlobalStats;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<RadarV2ScanData> RadarV2Scans;  // 0x0340, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 RadarV2ScanCount;  // 0x0350, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 RadarV3ScanCount;  // 0x0354, size 0x4

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void ClientUpdateRadarMapTile(int32 x, int32 y, EMapTileRadarFlag flag, FVector worldPosition, ABP_Radar_C* radar);  // parameters 0x20
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void ClientUpdateRadarRadius(int32 X, int32 Y, int32 Radius, FVector TileWorldSpace, ABP_Radar_C* radar);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void CompleteTileScan(int32 X, int32 Y, ABP_Radar_C* Radar);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void EquipableApplyGlobalStat(UBP_EquippableModifier_C* Equippable_Instance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void EquipableRemoveGlobalStat(UBP_EquippableModifier_C* Equippable_Instance);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_MapManager(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FlushAllScans();
    UFUNCTION(BlueprintCallable) void GetNearestUnscannedTileInRangeOf1(int32 X, int32 Y, int32& Unscanned_X, int32& Unscanned_Y);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetRadarUMG(UUMG_RadarMainScreen_C*& RadarMainScreen);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetTileAtGridspaceVector(FVector TileCoords, EMapTileRadarFlag& Radar_Flag, bool& Failed);  // parameters 0xE
    UFUNCTION(BlueprintCallable) void InitMapTiles();
    UFUNCTION(BlueprintCallable) void IsValidTileCoord(int32 X, int32 Y, bool& Valid);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void LineSubsectionCheck(VectorPair TestLine, VectorPair CheckAgainstLine, TEnumAsByte<LineSegmentRelationship>& NewParam);  // parameters 0x31
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_RunFlushAllScans();
    UFUNCTION(BlueprintCallable) void OnRep_RadarV2ScanCount();
    UFUNCTION(BlueprintCallable) void OnRep_RadarV2Scans();
    UFUNCTION(BlueprintCallable) void OnRep_RadarV3ScanCount();
    UFUNCTION(BlueprintCallable) void OnRep_TileRadarStates();
    UFUNCTION(BlueprintCallable) void Radar_Radius_Update(ABP_Radar_C* Radar);  // parameters 0x8, named "Radar Radius Update"
    UFUNCTION(BlueprintCallable) void RadarTileToWorld(int32 X, int32 Y, FVector& TileCenterWorldSpace);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void RadarV2ScanFinished(FVector WorldLocation, float DistanceInKM, float Intensity);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void RadarV3ScanFinished(FRadarV3ScanData Scan);  // parameters 0x28
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RecheckActorsForSingleGlobalStat(int32 StatIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveSingleGlobalStatFromActors(int32 StatIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void RestoreFromDatabase(const TMap<FIntPoint, int32>& TileFlags, const TArray<FRadarV3ScanData>& RadarScans);  // parameters 0x60
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SaveToDatabase(TMap<FIntPoint, int32>& TileFlags);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void ServerOnlyUpdate();
    UFUNCTION(BlueprintCallable) void SetColumnTilesFromBitmask();
    UFUNCTION(BlueprintCallable) void SetMapTileForFOW(int32 X, int32 Y, bool& FoundUnscanned, int32& Unscanned_X, int32& Unscanned_Y);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetTileRadarFlag(int32 x, int32 y, EMapTileRadarFlag Flag);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void TryToGetUnscannedTileAtCoords(int32 X, int32 Y, bool& FoundUnscanned, int32& Unscanned_X, int32& Unscanned_Y);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
