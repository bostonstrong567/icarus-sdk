// /Script/AIModule.BehaviorTreeManager
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h

UCLASS(Transient, Config=Engine)
class UBehaviorTreeManager : public UObject
{
public:
    UPROPERTY(Config) int32 MaxDebuggerSteps;  // 0x0028, size 0x4
    UPROPERTY() TArray<FBehaviorTreeTemplateInfo> LoadedTemplates;  // 0x0030, size 0x10
    UPROPERTY() TArray<UBehaviorTreeComponent*> ActiveComponents;  // 0x0040, size 0x10
};
