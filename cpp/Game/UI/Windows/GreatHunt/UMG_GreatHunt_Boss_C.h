// /Game/UI/Windows/GreatHunt/UMG_GreatHunt_Boss.UMG_GreatHunt_Boss_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x398, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_GreatHunt_Boss_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* AbandonButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Background_;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Bosses;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CannotRequestMission;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* GH;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* GreatHuntMainScaleBox;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ItemDisplayBox;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MapTitle;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Noise;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* OtherBosses;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* OtherBosses_Grid;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* OtherHunts;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pattern;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Requested;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_WeaponInfo_C* UMG_BioLab_WeaponInfo;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* UMG_IcarusGrid;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_117;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* WorldBosses;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FTalentArchetypeSelected TalentArchetypeSelected;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle Session_Flag;  // 0x0310, size 0x18, named "Session Flag"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FShowLegendaryWeapon ShowLegendaryWeapon;  // 0x0328, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_GreatHunt_Button_C* GreatHuntMain;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D OtherHuntsSpacer;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D OtherBossesSpacer;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ItemDisplaySpacer;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D WorldBossesSpacer;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGreatHuntCreatureInfoRowHandle DefaultGreatHunt;  // 0x0360, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGreatHuntCreatureInfoRowHandle> DefaultWorldBosses;  // 0x0378, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FShowOutpostFill ShowOutpostFill;  // 0x0388, size 0x10

    UFUNCTION() void BndEvt__UMG_GreatHunt_Boss_UMG_BioLab_WeaponInfo_K2Node_ComponentBoundEvent_0_BackClicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ButtonClicked(FLivingItemShopItemsRowHandle Weapon);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_GreatHunt_Boss(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HuntClicked(FTalentArchetypesRowHandle Hunt, FLivingItemShopItemsRowHandle Weapon);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void Populate_Buttons(bool DesignTime);  // parameters 0x1, named "Populate Buttons"
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDefaults();
    UFUNCTION(BlueprintCallable) void ShowLegendaryWeapon__DelegateSignature(FLivingItemShopItemsRowHandle Weapon);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ShowOutpostFill__DelegateSignature();
    UFUNCTION(BlueprintCallable) void TalentArchetypeSelected__DelegateSignature(FTalentArchetypesRowHandle Archetype, FLivingItemShopItemsRowHandle Weapon);  // parameters 0x30
};
