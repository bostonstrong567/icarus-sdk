// /Script/AIModule.ActorPerceptionUpdateInfo
// size 0x48, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h

USTRUCT()
struct FActorPerceptionUpdateInfo
{
public:
    UPROPERTY(BlueprintReadWrite) int32 TargetId;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) TWeakObjectPtr<AActor> Target;  // 0x0004, size 0x8
    UPROPERTY(BlueprintReadWrite) FAIStimulus Stimulus;  // 0x000C, size 0x3C
};
