// /Game/BP/UI/Talents/Base/UMG_Talent_ComingSoon.UMG_Talent_ComingSoon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Talent_ComingSoon_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Reveal;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_45;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ClockIcon;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* HoverArea;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TextBorder;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor HoveredColor;  // 0x0290, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor UnhoveredColor;  // 0x02A0, size 0x10

    UFUNCTION() void BndEvt__HoverArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__HoverArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_Talent_ComingSoon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
