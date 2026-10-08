// /Script/Icarus.BTTask_IcarusMoveDirectlyToward
// Derives from: UBTTask_MoveDirectlyToward > UBTTask_MoveTo > UBTTask_BlackboardBase > UBTTaskNode > UBTNode > UObject
// size 0xE8, declared in Icarus/Source/Icarus/AI/BT/BTTask_IcarusMoveDirectlyToward.h

UCLASS(Config=Game)
class UBTTask_IcarusMoveDirectlyToward : public UBTTask_MoveDirectlyToward
{
public:
    UPROPERTY(EditAnywhere) bool bUseBlackboardDefinedAcceptanceRadius;  // 0x00B8, size 0x1
    UPROPERTY(EditAnywhere) bool bIgnoreInvalidRadiusValues;  // 0x00B9, size 0x1
    UPROPERTY(EditAnywhere) FBlackboardKeySelector AcceptableRadiusKey;  // 0x00C0, size 0x28
};
