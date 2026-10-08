// /Script/Icarus.PlayerEnvironmentalAudioComponent
// Derives from: UActorComponent > UObject
// size 0x178, declared in Icarus/Source/Icarus/Audio/Player/PlayerEnvironmentalAudioComponent.h

UCLASS(Config=Engine)
class UPlayerEnvironmentalAudioComponent : public UActorComponent
{
public:
    UPROPERTY(BlueprintReadWrite) AFLOD* FLOD;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FoliageCountTraceRadius;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FoliageCloseCountTraceRadius;  // 0x00BC, size 0x4
    UPROPERTY() TArray<UPlayerAudioFoliageRecord*> FoliageRecords;  // 0x00C0, size 0x10
    UPROPERTY() TArray<UFLODRecord*> PendingFoliageRecords;  // 0x00D0, size 0x10
    UPROPERTY() TSet<AFLODTile*> LoadedFLODTiles;  // 0x00E0, size 0x50
    UPROPERTY(BlueprintReadWrite) float CurrentShelter;  // 0x0134, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> ShelterTraceDirections;  // 0x0140, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDebugShelter;  // 0x0150, size 0x1
    UPROPERTY() UGameplayTexture* TerrainZoneMap;  // 0x0170, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    int32 CurrentFoliageRecordIndex;  // 0x0130, private
    FAudioShelterUpdated OnShelterUpdated;  // 0x0138
    TArray<FPlayerAudioShelterRecord,TSizedDefaultAllocator<32> > ShelterRecords;  // 0x0158, private
    int32 CurrentShelterRecordIndex;  // 0x0168, private

    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetCurrentBushCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetCurrentTreeCount(int32& OutCount, int32& OutCloseCount, float& OutCoverDepth, float& OutCloseCountGroupOverlap) const;  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) FVector GetFoliageTraceLocation();  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) FVector GetShelterTraceLocation();  // parameters 0xC
    UFUNCTION(BlueprintCallable) void GetShelterValues(float& OutShelter, float& OutAverageDistance, float& OutClosestDistance, TEnumAsByte<EPhysicalSurface>& OutPrimarySurface, float& OutAverageReflectionMultiplier, float& OutAverageReflectionHighFreq, float& OutAverageReflectionLowFreq);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void InitialiseTerrainZoneMap();
    UFUNCTION(BlueprintCallable) void UpdateTerrainParameters();
};
