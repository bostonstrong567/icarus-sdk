// /Game/UI/Components/SleepScreen/UMG_SleepChecks.UMG_SleepChecks_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SleepChecks_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BaseColourBorder;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BoxText;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ButtonCheck;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CheckboxBorder;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CheckIcon;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ValidGreen;  // 0x0298, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor InValidRed;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText SleepText;  // 0x02B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Tooltip_Text_Field;  // 0x02D0, size 0x18, named "Tooltip Text Field"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* IconImage;  // 0x02E8, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_SleepChecks(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetValidStyle(bool IsValid);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateSleepCount(int32 Count, int32 Total);  // parameters 0x8
};
