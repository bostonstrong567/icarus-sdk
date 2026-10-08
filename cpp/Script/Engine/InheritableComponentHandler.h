// /Script/Engine.InheritableComponentHandler
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Engine/InheritableComponentHandler.h

UCLASS()
class UInheritableComponentHandler : public UObject
{
public:
    UPROPERTY() TArray<FComponentOverrideRecord> Records;  // 0x0028, size 0x10
    UPROPERTY(Transient) TArray<UActorComponent*> UnnecessaryComponents;  // 0x0038, size 0x10
};
