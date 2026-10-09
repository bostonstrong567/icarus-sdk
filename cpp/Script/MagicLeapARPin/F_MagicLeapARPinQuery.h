// /Script/MagicLeapARPin.MagicLeapARPinQuery
// size 0x68, declared in Engine/Plugins/Lumin/MagicLeapPassableWorld/Source/MagicLeapARPin/Public/MagicLeapARPinTypes.h

USTRUCT()
struct FMagicLeapARPinQuery
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<EMagicLeapARPinType> Types;  // 0x0000, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxResults;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetPoint;  // 0x0054, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radius;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSorted;  // 0x0064, size 0x1
};
