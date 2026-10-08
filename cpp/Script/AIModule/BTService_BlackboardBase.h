// /Script/AIModule.BTService_BlackboardBase
// Derives from: UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x98, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Services/BTService_BlackboardBase.h

UCLASS(Abstract)
class UBTService_BlackboardBase : public UBTService
{
public:
    UPROPERTY(EditAnywhere) FBlackboardKeySelector BlackboardKey;  // 0x0070, size 0x28
};
