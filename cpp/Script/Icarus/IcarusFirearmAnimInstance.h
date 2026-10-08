// /Script/Icarus.IcarusFirearmAnimInstance
// Derives from: UIcarusAnimInstance > UAnimInstance > UObject
// size 0xAA0, declared in Icarus/Source/Icarus/Animation/IcarusFirearmAnimInstance.h

UCLASS(Transient)
class UIcarusFirearmAnimInstance : public UIcarusAnimInstance
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UActionableBehaviour* ActionableBehaviour;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAnimDataLoaded;  // 0x02D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FFirearmData FirearmData;  // 0x02E0, size 0x690
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FFirearmAnimData AnimData;  // 0x0970, size 0x118
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentCharge;  // 0x0A88, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsADS;  // 0x0A8C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentAimAlpha;  // 0x0A90, size 0x4
};
