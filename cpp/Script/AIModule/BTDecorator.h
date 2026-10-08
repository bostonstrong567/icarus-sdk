// /Script/AIModule.BTDecorator
// Derives from: UBTAuxiliaryNode > UBTNode > UObject
// size 0x68, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h

UCLASS(Abstract)
class UBTDecorator : public UBTAuxiliaryNode
{
public:
    UPROPERTY(EditAnywhere) uint8 bInverseCondition : 1;  // 0x0060, mask 0x80
    UPROPERTY(EditAnywhere) TEnumAsByte<EBTFlowAbortMode> FlowAbortMode;  // 0x0064, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 bAllowAbortNone;  // 0x0060, protected
    uint32 : 1 bAllowAbortLowerPri;  // 0x0060, protected
    uint32 : 1 bAllowAbortChildNodes;  // 0x0060, protected
    uint32 : 1 bNotifyActivation;  // 0x0060, protected
    uint32 : 1 bNotifyDeactivation;  // 0x0060, protected
    uint32 : 1 bNotifyProcessed;  // 0x0060, protected
    uint32 : 1 bShowInverseConditionDesc;  // 0x0060, protected

    // Virtual functions that start here:
    //   CalculateRawConditionValue, OnNodeActivation, OnNodeDeactivation, OnNodeProcessed
};
