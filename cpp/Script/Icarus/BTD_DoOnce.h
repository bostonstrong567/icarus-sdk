// /Script/Icarus.BTD_DoOnce
// Derives from: UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0x70, declared in Icarus/Source/Icarus/AI/BT/BTD_DoOnce.h

UCLASS()
class UBTD_DoOnce : public UBTDecorator
{
public:
    UPROPERTY(EditAnywhere) bool MustSucceed;  // 0x0068, size 0x1
    UPROPERTY(EditAnywhere) bool SucceedOnSubsequentCalls;  // 0x0069, size 0x1
};
