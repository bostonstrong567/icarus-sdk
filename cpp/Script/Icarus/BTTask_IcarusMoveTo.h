// /Script/Icarus.BTTask_IcarusMoveTo
// Derives from: UBTTask_MoveTo > UBTTask_BlackboardBase > UBTTaskNode > UBTNode > UObject
// size 0xE0, declared in Icarus/Source/Icarus/AI/BT/BTTask_IcarusMoveTo.h

UCLASS(Config=Game)
class UBTTask_IcarusMoveTo : public UBTTask_MoveTo
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) bool bUseBlackboardDefinedAcceptanceRadius;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere) bool bIgnoreInvalidRadiusValues;  // 0x00B1, size 0x1
    UPROPERTY(EditAnywhere) FBlackboardKeySelector AcceptableRadiusKey;  // 0x00B8, size 0x28
};
