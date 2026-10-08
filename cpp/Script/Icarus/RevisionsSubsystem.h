// /Script/Icarus.RevisionsSubsystem
// Derives from: UGameInstanceSubsystem > USubsystem > UObject
// size 0x80, declared in Icarus/Source/Icarus/Subsystems/GameInstance/RevisionsSubsystem.h

UCLASS()
class URevisionsSubsystem : public UGameInstanceSubsystem
{
public:
    UPROPERTY() TMap<FString, int32> RevisionsMap;  // 0x0030, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetRevisionFromObject(const TSoftObjectPtr<UObject>& Object);  // parameters 0x2C
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetRevisionFromPath(FString Path);  // parameters 0x14
};
