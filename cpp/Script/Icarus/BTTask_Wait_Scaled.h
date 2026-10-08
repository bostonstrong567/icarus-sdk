// /Script/Icarus.BTTask_Wait_Scaled
// Derives from: UBTTask_Wait > UBTTaskNode > UBTNode > UObject
// size 0x90, declared in Icarus/Source/Icarus/AI/BT/BTTask_Wait_Scaled.h

UCLASS()
class UBTTask_Wait_Scaled : public UBTTask_Wait
{
public:
    UPROPERTY(EditAnywhere) FScalingRulesRowHandle ScalingRulesRowHandle;  // 0x0078, size 0x18
};
