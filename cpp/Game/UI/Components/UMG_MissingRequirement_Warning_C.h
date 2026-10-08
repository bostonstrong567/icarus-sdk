// /Game/UI/Components/UMG_MissingRequirement_Warning.UMG_MissingRequirement_Warning_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissingRequirement_Warning_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Warning;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_2;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_3;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WarningTextBox;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText WarningText;  // 0x0298, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MissingRequirement_Warning(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FireWarning();
};
