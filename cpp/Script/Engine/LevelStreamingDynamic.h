// /Script/Engine.LevelStreamingDynamic
// Derives from: ULevelStreaming > UObject
// size 0x160, declared in Engine/Source/Runtime/Engine/Classes/Engine/LevelStreamingDynamic.h

UCLASS(EditInlineNew)
class ULevelStreamingDynamic : public ULevelStreaming
{
public:
    UPROPERTY(EditAnywhere) uint8 bInitiallyLoaded : 1;  // 0x0158, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bInitiallyVisible : 1;  // 0x0158, mask 0x02

    UFUNCTION(BlueprintCallable) static ULevelStreamingDynamic* LoadLevelInstance(UObject* WorldContextObject, FString LevelName, FVector Location, FRotator Rotation, bool& bOutSuccess, FString OptionalLevelNameOverride);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static ULevelStreamingDynamic* LoadLevelInstanceBySoftObjectPtr(UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, FVector Location, FRotator Rotation, bool& bOutSuccess, FString OptionalLevelNameOverride);  // parameters 0x68
};
