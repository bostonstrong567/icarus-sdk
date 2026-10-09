// /Script/Icarus.DensityAudioSubsystem
// Derives from: UTickableWorldSubsystem > UWorldSubsystem > USubsystem > UObject
// size 0x90, declared in Icarus/Source/Icarus/Audio/Density/DensityAudioSubsystem.h

UCLASS()
class UDensityAudioSubsystem : public UTickableWorldSubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TMap<TSubclassOf<UObject>, FDensityAudioRecordSet> RecordSets;  // 0x0040, size 0x50
public:
    UFUNCTION(BlueprintCallable) void SubscribeToDensityUpdates(UObject* Target);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UnsubscribeFromDensityUpdates(UObject* Target);  // parameters 0x8
};
