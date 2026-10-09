// /Script/Icarus.MapManagerBase
// Derives from: AActor > UObject
// size 0x2B0, declared in Icarus/Source/Icarus/UI/Map/MapManagerBase.h

UCLASS(Config=Engine)
class AMapManagerBase : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FTransform MapCorner;  // 0x0220, size 0x30
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 TileSize;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<FRadarV3ScanData> RadarV3Scans;  // 0x0258, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FMapRow> FogData;  // 0x0268, size 0x10
protected:
    FTimerHandle TryInitFogDataTimerHandle;  // 0x0278, not reflected
    FTimerHandle SaveFogTimerHandle;  // 0x0280, not reflected
    FTimerHandle UpdateFogTimerHandle;  // 0x0288, not reflected
    UPROPERTY(EditAnywhere) float UpdateFogTime;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere) float SaveFogDataTime;  // 0x0294, size 0x4
    bool bFogDataIsDirty;  // 0x0298, not reflected
    UPROPERTY(Instanced) UMapManagerRecorderComponent* Recorder;  // 0x02A0, size 0x8
public:
    UFUNCTION() void CheckSaveFogData();
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector RadarTileToWorldLocation(int32 X, int32 Y) const;  // parameters 0x14
    UFUNCTION(BlueprintNativeEvent) void RestoreFromDatabase(const TMap<FIntPoint, int32>& TileFlags, const TArray<FRadarV3ScanData>& RadarScans);  // parameters 0x60
    UFUNCTION(BlueprintNativeEvent) void SaveToDatabase(TMap<FIntPoint, int32>& TileFlags);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldDrawFOWLocations(const TArray<FVector>& NewLocations, const TArray<FVector>& OldLocations) const;  // parameters 0x21
    UFUNCTION() void TryInitFogData();
    UFUNCTION() void UpdateFog();
    UFUNCTION(BlueprintCallable) void UpdatePendingFOWDrawLocations(TArray<FVector>& LocationArrayToUpdate);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void WorldSpaceToTile(FVector WorldSpaceLocation, int32& X, int32& Y);  // parameters 0x14
};
