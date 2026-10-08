// /Game/UI/CharacterSelect/UMG_CharacterProfileSlot.UMG_CharacterProfileSlot_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x510, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CharacterProfileSlot_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* AbandonReveal;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* RevealDetails;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HoverAnimation;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ButtonBase;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CharacterDetailsBorder;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CharacterImage;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CharacterLevel;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CharacterName;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* cornerimage;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* cornerimage_1;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* cornerimage_2;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* cornerimage_3;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Corners;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DropStatus;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SelectedFrame;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_AbandonProspectButton_C* UMG_AbandonProspectButton;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FButtonClicked ButtonClicked;  // 0x02E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FDeleteCharacter DeleteCharacter;  // 0x02F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FOnlineProfileCharacter Character;  // 0x0308, size 0xF0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectInfo ActiveProspect;  // 0x03F8, size 0xA0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColour_Default;  // 0x0498, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColour_Hovered;  // 0x04C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Is_Selected;  // 0x04E8, size 0x1, named "Is Selected"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* IconMaterial;  // 0x04F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTextureRenderTarget2D* IconRenderTarget;  // 0x04F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FAbandonButtonClicked AbandonButtonClicked;  // 0x0500, size 0x10

    UFUNCTION(BlueprintCallable) void AbandonButtonClicked__DelegateSignature(UUMG_CharacterProfileSlot_C* Slot);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__Button_118_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_CharacterProfileSlot_UMG_AbandonProspectButton_K2Node_ComponentBoundEvent_2_AbandonButtonClicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ButtonClicked__DelegateSignature(UUMG_CharacterProfileSlot_C* Input);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CalculatePlayerLevelFromExp(int32 Experience, int32& Level);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DeleteCharacter__DelegateSignature(UUMG_CharacterProfileSlot_C* Delete);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_UMG_CharacterProfileSlot(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateIcon();
    UFUNCTION(BlueprintCallable) void Initialize(FOnlineProfileCharacter Character, FProspectInfo CurrentActiveProspect);  // parameters 0x190
    UFUNCTION(BlueprintCallable) void SetSelectedState(bool IsSelected);  // parameters 0x1
};
