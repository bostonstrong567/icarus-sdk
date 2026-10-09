// /Script/AIModule.BTDecorator_ConeCheck
// Derives from: UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xF0, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h

UCLASS()
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
    UPROPERTY(EditAnywhere) float ConeHalfAngle;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere) FBlackboardKeySelector ConeOrigin;  // 0x0070, size 0x28
    UPROPERTY(EditAnywhere) FBlackboardKeySelector ConeDirection;  // 0x0098, size 0x28
    UPROPERTY(EditAnywhere) FBlackboardKeySelector Observed;  // 0x00C0, size 0x28
    float ConeHalfAngleDot;  // 0x00E8, not reflected
};
