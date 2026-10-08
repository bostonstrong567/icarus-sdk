// /Script/AIModule.BTAuxiliaryNode
// Derives from: UBTNode > UObject
// size 0x60, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h

UCLASS(Abstract)
class UBTAuxiliaryNode : public UBTNode
{
public:

    // Not reflected: the engine's scripting cannot see these.
    uint8 : 1 bNotifyBecomeRelevant;  // 0x0058, protected
    uint8 : 1 bNotifyCeaseRelevant;  // 0x0058, protected
    uint8 : 1 bNotifyTick;  // 0x0058, protected
    uint8 : 1 bTickIntervals;  // 0x0058, protected
    uint8 ChildIndex;  // 0x0059, protected

    // Virtual functions that start here:
    //   OnBecomeRelevant, OnCeaseRelevant, TickNode
};
