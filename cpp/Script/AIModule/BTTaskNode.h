// /Script/AIModule.BTTaskNode
// Derives from: UBTNode > UObject
// size 0x70, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h

UCLASS(Abstract)
class UBTTaskNode : public UBTNode
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() TArray<UBTService*> Services;  // 0x0058, size 0x10
protected:
    uint32 : 1 bNotifyTaskFinished;  // 0x0068, not reflected
    uint32 : 1 bNotifyTick;  // 0x0068, not reflected
    UPROPERTY(EditAnywhere) uint8 bIgnoreRestartSelf : 1;  // 0x0068, mask 0x01

    // Virtual functions that start here:
    //   AbortTask, ExecuteTask, OnMessage, OnTaskFinished, TickTask
};
