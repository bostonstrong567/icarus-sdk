// /Script/Icarus.IcarusAnimNotify
// Derives from: UAnimNotify > UObject
// size 0x58, declared in Icarus/Source/Icarus/Animation/IcarusAnimNotify.h

UCLASS(Const)
class UIcarusAnimNotify : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UTraitComponent> TargetComponent;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString NotifyName;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool TriggerWhenMontageReversed;  // 0x0050, size 0x1
};
