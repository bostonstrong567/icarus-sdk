// /Game/UI/Components/UMG_TitleScreenTrailerButton.UMG_TitleScreenTrailerButton_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TitleScreenTrailerButton_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HoverAnimation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* BaseButton;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* FrameDetail;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* glow;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HoveredSol;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HoveredSol_1;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OuterFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PlayIcon;  // 0x02A0, size 0x8

    UFUNCTION() void BndEvt__UMG_TitleScreenTrailerButton_BaseButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_TitleScreenTrailerButton_BaseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_TitleScreenTrailerButton_BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_TitleScreenTrailerButton(int32 EntryPoint);  // parameters 0x4
};
