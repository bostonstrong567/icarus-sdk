// /Script/AIModule.BTService_DefaultFocus
// Derives from: UBTService_BlackboardBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA0, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Services/BTService_DefaultFocus.h

UCLASS()
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() uint8 FocusPriority;  // 0x0098, size 0x1
};
