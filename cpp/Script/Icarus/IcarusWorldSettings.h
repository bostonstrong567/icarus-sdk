// /Script/Icarus.IcarusWorldSettings
// Derives from: AWorldSettings > AInfo > AActor > UObject
// size 0x3E8, declared in Icarus/Source/Icarus/IcarusWorldSettings.h

UCLASS(NotPlaceable, MinimalAPI, Config=game)
class AIcarusWorldSettings : public AWorldSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FTransform> ExoticVoxelSpawnLocations;  // 0x03A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FTransform> DeepMiningOreDepositSpawnLocations;  // 0x03B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCaveLocation> CaveLocations;  // 0x03C0, size 0x10
    UPROPERTY(Transient) UPlayerTrackerListener* PlayerTrackerListener;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AActor> AtmosphereControllerClass;  // 0x03D8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    bool bPlayerTrackerInitialized;  // 0x03E0

    UFUNCTION(BlueprintCallable) void AddDeepMiningOreDepositSpawnLocation(const FTransform& SpawnLocation);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void AddExoticVoxelSpawnLocation(const FTransform& SpawnLocation);  // parameters 0x30
};
