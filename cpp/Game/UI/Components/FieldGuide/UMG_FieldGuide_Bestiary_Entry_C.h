// /Game/UI/Components/FieldGuide/UMG_FieldGuide_Bestiary_Entry.UMG_FieldGuide_Bestiary_Entry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x331, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuide_Bestiary_Entry_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Corner_CreatureEntry;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Background;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BiomeImage;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ButtonBorder;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Corner;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_1;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_2;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_3;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_4;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Creature_Image;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Creature_Name;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Entry_Button;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Revealed;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClicked Clicked;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBestiaryDataRowHandle BestiaryData;  // 0x02E0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Percent;  // 0x02F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* HoverSound;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDiscovered;  // 0x0308, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAtmospheresRowHandle> Biomes;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTerrainsRowHandle> Maps;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsBoss;  // 0x0330, size 0x1

    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Entry_Entry_Button_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Clicked__DelegateSignature(FBestiaryDataRowHandle Creature, int32 Percent);  // parameters 0x1C
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuide_Bestiary_Entry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_46AAFD2A4E66B482B3157285E0EABC27(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_7706448D40DB9F6563F04C948605B0E8(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPercentage(int32 Percentage);  // parameters 0x4
};
