// /Script/AIModule.AIStimulus
// size 0x3C, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h

USTRUCT()
struct FAIStimulus
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintReadWrite) float Strength;  // 0x0008, size 0x4
    UPROPERTY(BlueprintReadWrite) FVector StimulusLocation;  // 0x000C, size 0xC
    UPROPERTY(BlueprintReadWrite) FVector ReceiverLocation;  // 0x0018, size 0xC
    UPROPERTY(BlueprintReadWrite) FName Tag;  // 0x0024, size 0x8
    FAINamedID<FAISenseCounter> Type;  // 0x002C, not reflected
protected:
    UPROPERTY(BlueprintReadWrite) float Age;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) float ExpirationAge;  // 0x0004, size 0x4
    uint32 : 1 bExpired;  // 0x0038, not reflected
    uint32 : 1 bWantsToNotifyOnlyOnValueChange;  // 0x0038, not reflected
    UPROPERTY(BlueprintReadWrite) uint8 bSuccessfullySensed : 1;  // 0x0038, mask 0x02
};
