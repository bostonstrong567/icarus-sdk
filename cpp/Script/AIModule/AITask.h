// /Script/AIModule.AITask
// Derives from: UGameplayTask > UObject
// size 0x70, declared in Engine/Source/Runtime/AIModule/Classes/Tasks/AITask.h

UCLASS(Abstract, Config=Game)
class UAITask : public UGameplayTask
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(BlueprintReadOnly) AAIController* OwnerController;  // 0x0068, size 0x8
};
