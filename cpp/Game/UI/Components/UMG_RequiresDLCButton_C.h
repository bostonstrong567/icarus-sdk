// /Game/UI/Components/UMG_RequiresDLCButton.UMG_RequiresDLCButton_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RequiresDLCButton_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* DLCButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* DLCName;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_114;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDLCPackageDataRowHandle DLC;  // 0x0280, size 0x18

    UFUNCTION() void BndEvt__UMG_BioLab_WeaponInfo_DLCButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_RequiresDLCButton(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RetryDLC();
    UFUNCTION(BlueprintCallable) void SetDLC(FDLCPackageDataRowHandle DLC);  // parameters 0x18
};
