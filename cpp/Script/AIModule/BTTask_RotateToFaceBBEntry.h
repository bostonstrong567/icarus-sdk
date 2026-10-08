// /Script/AIModule.BTTask_RotateToFaceBBEntry
// Derives from: UBTTask_BlackboardBase > UBTTaskNode > UBTNode > UObject
// size 0xA8, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h

UCLASS(Config=Game)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
    UPROPERTY(EditAnywhere, Config) float Precision;  // 0x0098, size 0x4
    UPROPERTY(EditAnywhere, Config) bool bIgnoreZPrecision;  // 0x009C, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    float PrecisionDot;  // 0x00A0, private
};
