// /Game/UI/CharacterSelect/UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x328, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CreateNewCharacterButton_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HoverAnimation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ButtonBase;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CharacterLevel;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CharacterName;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* cornerimage;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* cornerimage_1;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* cornerimage_2;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* cornerimage_3;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Corners;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FButtonClicked ButtonClicked;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FDeleteCharacter DeleteCharacter;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Hovered;  // 0x02D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColour_Base;  // 0x02D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColour_Hovered;  // 0x0300, size 0x28

    UFUNCTION() void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__Button_118_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ButtonClicked__DelegateSignature(UUMG_CreateNewCharacterButton_C* Input);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DeleteCharacter__DelegateSignature(UUMG_CharacterProfileSlot_C* Delete);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_UMG_CreateNewCharacterButton(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HoveredStyle();
    UFUNCTION(BlueprintCallable) void Initialize(FString Name, int32 Level, FString Drop_Progress);  // parameters 0x28
};
