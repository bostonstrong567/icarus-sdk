// /Game/UI/Components/FieldGuide/UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x5C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuide_Bestiary_Page_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BestiaryTitle_C* _0;  // 0x0268, size 0x8, named "0"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BestiaryTitle_C* _10;  // 0x0270, size 0x8, named "10"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BestiaryTitle_C* _100;  // 0x0278, size 0x8, named "100"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BestiaryTitle_C* _20;  // 0x0280, size 0x8, named "20"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BestiaryTitle_C* _30;  // 0x0288, size 0x8, named "30"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BestiaryTitle_C* _40;  // 0x0290, size 0x8, named "40"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BestiaryTitle_C* _60;  // 0x0298, size 0x8, named "60"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BestiaryTitle_C* _80;  // 0x02A0, size 0x8, named "80"
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BiomeImage;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BonusStatsBorder;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_Bestiary_Lock_C* BonusStatsLock;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CreatureBorder;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CreatureImage;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CreatureName;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_58;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Location;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ProgressBarDisplay;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ProgressBorder;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ProgressiveStats;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProgressText;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Tags;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BestiaryLore_C* UMG_BestiaryLore;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BestiaryRewards_C* UMG_BestiaryRewards;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* UMG_Lore_Button;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* UMG_Sound_Button;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* UMG_Unlocks_Button;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcherLoreandRewards;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBestiaryDataRowHandle Creature;  // 0x0340, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClose Close;  // 0x0358, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Percent;  // 0x0368, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBestiaryData Bestiary_Data;  // 0x0370, size 0x1D8, named "Bestiary Data"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor TerrainColour;  // 0x0548, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor BiomeColour;  // 0x0558, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor WeaknessColour;  // 0x0568, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Brush_Colour;  // 0x0578, size 0x28, named "Text Brush Colour"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> LocationList;  // 0x05A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Array_Element;  // 0x05B0, size 0x18, named "Array Element"

    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Page_100_K2Node_ComponentBoundEvent_10_HoverUpdated__DelegateSignature(bool Mouse);  // parameters 0x1
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Page_20_2_K2Node_ComponentBoundEvent_7_HoverUpdated__DelegateSignature(bool Mouse);  // parameters 0x1
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Page_20_K2Node_ComponentBoundEvent_2_HoverUpdated__DelegateSignature(bool Mouse);  // parameters 0x1
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Page_40_2_K2Node_ComponentBoundEvent_5_HoverUpdated__DelegateSignature(bool Mouse);  // parameters 0x1
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Page_40_K2Node_ComponentBoundEvent_8_HoverUpdated__DelegateSignature(bool Mouse);  // parameters 0x1
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Page_60_K2Node_ComponentBoundEvent_9_HoverUpdated__DelegateSignature(bool Mouse);  // parameters 0x1
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Page_80_K2Node_ComponentBoundEvent_4_HoverUpdated__DelegateSignature(bool Mouse);  // parameters 0x1
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Page_UMG_Lore_Button_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Page_UMG_Sound_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Page_UMG_Unlocks_Button_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Close__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuide_Bestiary_Page(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_03137AEE43730A1D1EFCD5A1EDF9410F(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_B0BD2D9A45680E8E385723813AD88531(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetNameImagePercentage(int32 Percent);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetNoProgress();
    UFUNCTION(BlueprintCallable) void SetProgress();
    UFUNCTION(BlueprintCallable) void ShowLore();
    UFUNCTION(BlueprintCallable) void ShowRewards();
};
