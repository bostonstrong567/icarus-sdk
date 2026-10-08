// /Game/UI/Components/UMG_RepairBenchIcon.UMG_RepairBenchIcon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RepairBenchIcon_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider_1;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* FailIcon;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* NoShelterIcon;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SuccessIcon;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRecipeSetsRowHandle RecipeSet;  // 0x0298, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_RepairBenchIcon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_C712882247D2AB4653885092C87494BA(UObject* Loaded);  // parameters 0x8
};
