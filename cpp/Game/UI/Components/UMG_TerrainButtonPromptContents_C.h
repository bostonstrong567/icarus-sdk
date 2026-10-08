// /Game/UI/Components/UMG_TerrainButtonPromptContents.UMG_TerrainButtonPromptContents_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TerrainButtonPromptContents_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* BoostButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* BoostPanel;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BoostText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Checkbox_C* DontShowAgainCheckbox;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBoostButtonClicked BoostButtonClicked;  // 0x0288, size 0x10

    UFUNCTION() void BndEvt__UMG_TerrainButtonPromptContents_UMG_IconTextButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void BoostButtonClicked__DelegateSignature();
    UFUNCTION(BlueprintCallable, BlueprintPure) void DontShowAgain(bool& DontShowAgain);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_TerrainButtonPromptContents(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetBoostPanelDetails(bool Visible, int32 PlayerLevel, int32 RenBoost, int32 ExoticBoost);  // parameters 0x10
};
