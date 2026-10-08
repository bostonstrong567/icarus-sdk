// /Game/UI/Hab/DropTerminal/UMG_OpenProspectListEntry.UMG_OpenProspectListEntry_C
// Derives from: UUMG_ToggleButtonBase_C > UUMG_ButtonBase_C > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0xB89, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_OpenProspectListEntry_C : public UUMG_ToggleButtonBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_OnProspectStatus;  // 0x07F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ImageButton;  // 0x0800, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox;  // 0x0808, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_ProspectName;  // 0x0810, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_ProspectType;  // 0x0818, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAssociatedProspectInfo ProspectInfo;  // 0x0820, size 0xD8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle NormalStyle;  // 0x08F8, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ProspectTypeText;  // 0x0B70, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsOnProspect;  // 0x0B88, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_OpenProspectListEntry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusUpdated(bool bNewFocus);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetButtonText(UTextBlock*& ButtonText);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetImageButton(UButton*& ImageButton);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
