// /Game/BP/Tools/CheatFunctions/CF_FertilizeAnimals.CF_FertilizeAnimals_C
// Derives from: UCF_BaseButton_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x328, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_FertilizeAnimals_C : public UCF_BaseButton_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USkeletalMeshComponent*> Armour_Components;  // 0x02F8, size 0x10, named "Armour Components"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USkeletalMeshComponent*> Simple_TPArmour_Components;  // 0x0308, size 0x10, named "Simple TPArmour Components"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USkeletalMeshComponent*> FPArmour_Components;  // 0x0318, size 0x10, named "FPArmour Components"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_FertilizeAnimals(int32 EntryPoint);  // parameters 0x4
};
