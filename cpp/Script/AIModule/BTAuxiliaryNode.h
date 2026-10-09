// /Script/AIModule.BTAuxiliaryNode
// Derives from: UBTNode > UObject
// size 0x60, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h

UCLASS(Abstract)
class UBTAuxiliaryNode : public UBTNode
{
protected:
    uint8 : 1 bNotifyBecomeRelevant;  // 0x0058, not reflected
    uint8 : 1 bNotifyCeaseRelevant;  // 0x0058, not reflected
    uint8 : 1 bNotifyTick;  // 0x0058, not reflected
    uint8 : 1 bTickIntervals;  // 0x0058, not reflected
    uint8 ChildIndex;  // 0x0059, not reflected

    // Virtual functions that start here:
    //   OnBecomeRelevant, OnCeaseRelevant, TickNode
};
