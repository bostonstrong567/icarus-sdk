// /Script/AIModule.BTDecorator_DoesPathExist
// Derives from: UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC8, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h

UCLASS()
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
    UPROPERTY(EditAnywhere) FBlackboardKeySelector BlackboardKeyA;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere) FBlackboardKeySelector BlackboardKeyB;  // 0x0090, size 0x28
    UPROPERTY() uint8 bUseSelf : 1;  // 0x00B8, mask 0x01
    UPROPERTY(EditAnywhere) TEnumAsByte<EPathExistanceQueryType> PathQueryType;  // 0x00BC, size 0x1
    UPROPERTY(EditAnywhere) TSubclassOf<UNavigationQueryFilter> FilterClass;  // 0x00C0, size 0x8
};
