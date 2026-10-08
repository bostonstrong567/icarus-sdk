// /Script/AIModule.AITask
// Derives from: UGameplayTask > UObject
// size 0x70, declared in Engine/Source/Runtime/AIModule/Classes/Tasks/AITask.h

UCLASS(Abstract, Config=Game)
class UAITask : public UGameplayTask
{
public:
    UPROPERTY(BlueprintReadOnly) AAIController* OwnerController;  // 0x0068, size 0x8
};
