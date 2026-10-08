// /Game/BP/UI/Talents/Player/UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x730, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TalentArchetype_Player_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ReqLvlPulse;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* IconWidget;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LockedBorder;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RequiredLevelText;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TextAndIconBorder;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextWidget;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Underline;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnClicked OnClicked;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Text;  // 0x02B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentArchetypesRowHandle Archetype;  // 0x02D0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Selected;  // 0x02E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush IconBrush;  // 0x02F0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush SelectedBrush;  // 0x0378, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle ButtonStyle;  // 0x0400, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColour;  // 0x0678, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor SelectedTextColour;  // 0x06A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor NormalTextColour;  // 0x06C8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor HoveredTextColour;  // 0x06F0, size 0x28
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UTalentViewInterface* View;  // 0x0718, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Required_Level;  // 0x0720, size 0x4, named "Required Level"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* FMOD_ButtonClick;  // 0x0728, size 0x8

    UFUNCTION() void BndEvt__Button_31_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__Button_31_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__Button_31_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__Button_31_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__Button_31_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void Deselect();
    UFUNCTION() void ExecuteUbergraph_UMG_TalentArchetype_Player(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void On_Model_State_Changed(UTalentModelInterface_Const* Model);  // parameters 0x8, named "On Model State Changed"
    UFUNCTION(BlueprintCallable) void OnClicked__DelegateSignature(FTalentArchetypesRowHandle Archetype);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Refresh();
    UFUNCTION(BlueprintCallable) void Select();
    UFUNCTION(BlueprintCallable) void UpdateRequiredLevel();
};
