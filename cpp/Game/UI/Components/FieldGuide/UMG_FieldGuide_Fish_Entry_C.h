// /Game/UI/Components/FieldGuide/UMG_FieldGuide_Fish_Entry.UMG_FieldGuide_Fish_Entry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2FA, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuide_Fish_Entry_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Corner_FishEntry;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Background;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Corner;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_2;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_3;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_4;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Creature_Image;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Creature_Name;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Entry_Button;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* FishButtonBorder;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClicked Clicked;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFishDataRowHandle FishData;  // 0x02D0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Discovered;  // 0x02E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* HoverAudioFish;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EFishType Type;  // 0x02F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EFishRarity Rarity;  // 0x02F9, size 0x1

    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Clicked__DelegateSignature(FFishDataRowHandle Creature, bool Discovered);  // parameters 0x19
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuide_Fish_Entry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_2A3FFF3842AAE275218ED8B8847414A6(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPercentage(bool Discovered);  // parameters 0x1
};
