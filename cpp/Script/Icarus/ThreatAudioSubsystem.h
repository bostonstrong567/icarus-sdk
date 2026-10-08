// /Script/Icarus.ThreatAudioSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x40, declared in Icarus/Source/Icarus/Audio/Threat/ThreatAudioSubsystem.h

UCLASS()
class UThreatAudioSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY() TArray<UObject*> TrackedObjects;  // 0x0030, size 0x10

    UFUNCTION(BlueprintCallable) void Add(UObject* Target);  // parameters 0x8
    UFUNCTION(BlueprintCallable) FThreatAudioResult GetThreatLevel(AIcarusPlayerCharacter* Player);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Remove(UObject* Target);  // parameters 0x8
};
