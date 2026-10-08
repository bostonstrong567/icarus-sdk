// /Game/UI/Components/UMG_SimpleProgressbar.UMG_SimpleProgressbar_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2AC, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SimpleProgressbar_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Bar;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_198;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProgressTitle;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor FillColour;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ProgressBarName;  // 0x0290, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Progress;  // 0x02A8, size 0x4

    UFUNCTION() void ExecuteUbergraph_UMG_SimpleProgressbar(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor GetBarColours();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float Get_Bar_Percent_0();  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
