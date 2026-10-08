// /Script/Icarus.DensityAudioSubsystem
// Derives from: UTickableWorldSubsystem > UWorldSubsystem > USubsystem > UObject
// size 0x90, declared in Icarus/Source/Icarus/Audio/Density/DensityAudioSubsystem.h

UCLASS()
class UDensityAudioSubsystem : public UTickableWorldSubsystem
{
public:
    UPROPERTY() TMap<TSubclassOf<UObject>, FDensityAudioRecordSet> RecordSets;  // 0x0040, size 0x50

    UFUNCTION(BlueprintCallable) void SubscribeToDensityUpdates(UObject* Target);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UnsubscribeFromDensityUpdates(UObject* Target);  // parameters 0x8
};
