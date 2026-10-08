// /Script/Icarus.BTD_CustomTimeLimit
// Derives from: UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0x70, declared in Icarus/Source/Icarus/AI/BT/BTD_CustomTimeLimit.h

UCLASS()
class UBTD_CustomTimeLimit : public UBTDecorator
{
public:
    UPROPERTY(EditAnywhere) float TimeLimit;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere) float Deviation;  // 0x006C, size 0x4
};
