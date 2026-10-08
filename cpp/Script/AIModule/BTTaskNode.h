// /Script/AIModule.BTTaskNode
// Derives from: UBTNode > UObject
// size 0x70, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h

UCLASS(Abstract)
class UBTTaskNode : public UBTNode
{
public:
    UPROPERTY() TArray<UBTService*> Services;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere) uint8 bIgnoreRestartSelf : 1;  // 0x0068, mask 0x01

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 bNotifyTick;  // 0x0068, protected
    uint32 : 1 bNotifyTaskFinished;  // 0x0068, protected

    // Virtual functions that start here:
    //   AbortTask, ExecuteTask, OnMessage, OnTaskFinished, TickTask
};
