// /Game/BP/Objects/World/Items/Deployables/Signs/UMG_Sign_Text_Display.UMG_Sign_Text_Display_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Sign_Text_Display_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Icon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_Main;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_SignText;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemableRowHandle CurrentIconRow;  // 0x0280, size 0x18

    UFUNCTION() void ExecuteUbergraph_UMG_Sign_Text_Display(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitialiseWidget(FVector2D Size, bool WrapText, TEnumAsByte<ETextJustify> Justification);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void UpdateSignDisplayIcon(FItemableRowHandle Itemable);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateSignDisplayText(FText Text);  // parameters 0x18
};
