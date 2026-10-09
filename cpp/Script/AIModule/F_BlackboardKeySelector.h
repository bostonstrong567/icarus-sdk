// /Script/AIModule.BlackboardKeySelector
// size 0x28, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h

USTRUCT()
struct FBlackboardKeySelector
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) TArray<UBlackboardKeyType*> AllowedTypes;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SelectedKeyName;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) TSubclassOf<UBlackboardKeyType> SelectedKeyType;  // 0x0018, size 0x8
protected:
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) uint8 SelectedKeyID;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bNoneIsAllowedValue : 1;  // 0x0024, mask 0x01
};
