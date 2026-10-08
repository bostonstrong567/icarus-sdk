// /Script/AIModule.BTDecorator_IsAtLocation
// Derives from: UBTDecorator_BlackboardBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xD8, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_IsAtLocation.h

UCLASS()
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
    UPROPERTY(EditAnywhere) float AcceptableRadius;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue ParametrizedAcceptableRadius;  // 0x0098, size 0x38
    UPROPERTY(EditAnywhere) FAIDistanceType GeometricDistanceType;  // 0x00D0, size 0x1
    UPROPERTY() uint8 bUseParametrizedRadius : 1;  // 0x00D4, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bUseNavAgentGoalLocation : 1;  // 0x00D4, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bPathFindingBasedTest : 1;  // 0x00D4, mask 0x04
};
