// /Script/Icarus.RevisionsSubsystem
// Derives from: UGameInstanceSubsystem > USubsystem > UObject
// size 0x80, declared in Icarus/Source/Icarus/Subsystems/GameInstance/RevisionsSubsystem.h

UCLASS()
class URevisionsSubsystem : public UGameInstanceSubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TMap<FString, int32> RevisionsMap;  // 0x0030, size 0x50
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetRevisionFromObject(const TSoftObjectPtr<UObject>& Object);  // parameters 0x2C
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetRevisionFromPath(FString Path);  // parameters 0x14
};
