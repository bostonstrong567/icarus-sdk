// /Script/AIModule.ActorPerceptionBlueprintInfo
// size 0x20, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h

USTRUCT()
struct FActorPerceptionBlueprintInfo
{
    UPROPERTY(BlueprintReadWrite) AActor* Target;  // 0x0000, size 0x8
    UPROPERTY(BlueprintReadWrite) TArray<FAIStimulus> LastSensedStimuli;  // 0x0008, size 0x10
    UPROPERTY(BlueprintReadWrite) uint8 bIsHostile : 1;  // 0x0018, mask 0x01
};
