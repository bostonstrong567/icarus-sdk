// /Script/Icarus.FishingFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Fishing/FishingFunctionLibrary.h

UCLASS()
class UFishingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void BestiaryTrackFish(UObject* WorldContext, AIcarusPlayerCharacter* PlayerFisher, const FItemData& Fish);  // parameters 0x200
    UFUNCTION(BlueprintCallable) static bool CatchFish(UObject* WorldContext, AActor* Fisher, FItemData& Fish);  // parameters 0x201
    UFUNCTION(BlueprintCallable) static bool CatchFishInZone(AActor* Fisher, FFishSpawnZonesRowHandle SpawnZone, FItemData& Fish);  // parameters 0x211
    UFUNCTION(BlueprintCallable) static bool GenerateFish(UObject* WorldContext, const FVector& Location, FFishDataRowHandle& Fish, float& ZoneQuality);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static bool GenerateFishStats(UObject* WorldContext, FFishDataRowHandle& FishData, float ZoneQuality, UIcarusStatContainer* Stats, FItemData& Fish);  // parameters 0x221
    UFUNCTION(BlueprintCallable) static float GetFishScale(UObject* WorldContext, FItemData Fish);  // parameters 0x1FC
    UFUNCTION(BlueprintCallable) static FFishSpawnZonesRowHandle GetFishSpawnZone(UObject* WorldContext, FTerrainsRowHandle Terrain, const FVector& Location);  // parameters 0x44
    UFUNCTION(BlueprintCallable) static FFishTypeTracking GetFishStatsFromItem(UObject* WorldContext, const FFishDataRowHandle& FishRow, const FItemData& FishItemIn);  // parameters 0x238
    UFUNCTION(BlueprintCallable) static bool IsMatch(int32 Bitmask, int32 PopType);  // parameters 0x9
};
