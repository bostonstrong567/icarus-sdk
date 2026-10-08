// /Game/UI/Components/SquareProgress/UMG_CraftingProgressbar.UMG_CraftingProgressbar_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x274, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CraftingProgressbar_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Progress;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentProgress;  // 0x0270, size 0x4

    UFUNCTION() void ExecuteUbergraph_UMG_CraftingProgressbar(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetProgress(float Percent);  // parameters 0x4
};
