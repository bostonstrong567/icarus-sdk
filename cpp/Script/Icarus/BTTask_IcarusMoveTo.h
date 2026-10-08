// /Script/Icarus.BTTask_IcarusMoveTo
// Derives from: UBTTask_MoveTo > UBTTask_BlackboardBase > UBTTaskNode > UBTNode > UObject
// size 0xE0, declared in Icarus/Source/Icarus/AI/BT/BTTask_IcarusMoveTo.h

UCLASS(Config=Game)
class UBTTask_IcarusMoveTo : public UBTTask_MoveTo
{
public:
    UPROPERTY(EditAnywhere) bool bUseBlackboardDefinedAcceptanceRadius;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere) bool bIgnoreInvalidRadiusValues;  // 0x00B1, size 0x1
    UPROPERTY(EditAnywhere) FBlackboardKeySelector AcceptableRadiusKey;  // 0x00B8, size 0x28
};
