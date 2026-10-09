// /Script/AIModule.BTCompositeNode
// Derives from: UBTNode > UObject
// size 0x90, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h

UCLASS(Abstract)
class UBTCompositeNode : public UBTNode
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() TArray<FBTCompositeChild> Children;  // 0x0058, size 0x10
    UPROPERTY() TArray<UBTService*> Services;  // 0x0068, size 0x10
    TDelegate<int __cdecl(FBehaviorTreeSearchData &,int,enum EBTNodeResult::Type),FDefaultDelegateUserPolicy> OnNextChild;  // 0x0078, not reflected
protected:
    uint32 : 1 bUseChildExecutionNotify;  // 0x0088, not reflected
    uint32 : 1 bUseDecoratorsActivationCheck;  // 0x0088, not reflected
    uint32 : 1 bUseDecoratorsDeactivationCheck;  // 0x0088, not reflected
    uint32 : 1 bUseDecoratorsFailedActivationCheck;  // 0x0088, not reflected
    uint32 : 1 bUseNodeActivationNotify;  // 0x0088, not reflected
    uint32 : 1 bUseNodeDeactivationNotify;  // 0x0088, not reflected
    UPROPERTY(EditAnywhere) uint8 bApplyDecoratorScope : 1;  // 0x0088, mask 0x01
    uint16 LastExecutionIndex;  // 0x008C, not reflected

    // Virtual functions that start here:
    //   CanNotifyDecoratorsOnActivation, CanNotifyDecoratorsOnDeactivation
    //   CanNotifyDecoratorsOnFailedActivation, CanPushSubtree, GetNextChildHandler, NotifyChildExecution
    //   NotifyNodeActivation, NotifyNodeDeactivation, SetChildOverride
};
