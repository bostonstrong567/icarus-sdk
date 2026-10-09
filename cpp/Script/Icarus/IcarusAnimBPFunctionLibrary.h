// /Script/Icarus.IcarusAnimBPFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Animation/IcarusAnimBPFunctionLibrary.h

UCLASS()
class UIcarusAnimBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static bool GetMontageSectionLength(UAnimMontage* AnimMontage, FName SectionName, float& Length);  // parameters 0x15
    UFUNCTION(BlueprintCallable) static float GetMontageSlotWeight(UAnimInstance* AnimInstance, FName SlotName, bool bLocalWeight);  // parameters 0x18
};
