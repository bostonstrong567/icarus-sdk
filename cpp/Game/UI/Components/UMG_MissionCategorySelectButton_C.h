// /Game/UI/Components/UMG_MissionCategorySelectButton.UMG_MissionCategorySelectButton_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x369, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionCategorySelectButton_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Corner_FieldguideEntry;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BorderColour;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Corner;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_1;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_2;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_3;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_4;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* Unavailable;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* UnavaliableText;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClicked Clicked;  // 0x02D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* HoverAudio;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Texture;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ButtonName;  // 0x02F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ButtonDescription;  // 0x0310, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor In_Color_and_Opacity;  // 0x0328, size 0x28, named "In Color and Opacity"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisabledText;  // 0x0350, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Available;  // 0x0368, size 0x1

    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_FieldGuide_Category_Button_Button_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MissionCategorySelectButton(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAvailable(bool Available);  // parameters 0x1
};
