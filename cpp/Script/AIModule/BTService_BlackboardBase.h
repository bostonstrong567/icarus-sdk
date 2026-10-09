// /Script/AIModule.BTService_BlackboardBase
// Derives from: UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x98, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Services/BTService_BlackboardBase.h

UCLASS(Abstract)
class UBTService_BlackboardBase : public UBTService
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) FBlackboardKeySelector BlackboardKey;  // 0x0070, size 0x28
};
