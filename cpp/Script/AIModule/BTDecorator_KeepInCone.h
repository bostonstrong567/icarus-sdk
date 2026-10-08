// /Script/AIModule.BTDecorator_KeepInCone
// Derives from: UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC8, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h

UCLASS()
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
    UPROPERTY(EditAnywhere) float ConeHalfAngle;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere) FBlackboardKeySelector ConeOrigin;  // 0x0070, size 0x28
    UPROPERTY(EditAnywhere) FBlackboardKeySelector Observed;  // 0x0098, size 0x28
    UPROPERTY() uint8 bUseSelfAsOrigin : 1;  // 0x00C0, mask 0x01
    UPROPERTY() uint8 bUseSelfAsObserved : 1;  // 0x00C0, mask 0x02

    // Not reflected: the engine's scripting cannot see these.
    float ConeHalfAngleDot;  // 0x00C4
};
