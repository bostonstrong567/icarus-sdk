// /Game/UI/Components/UMG_ItemStats.UMG_ItemStats_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x541, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ItemStats_C : public UUserWidget, public IUserListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* AlterationBorder;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* AlterationList;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* AmmoType;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AmmoTypeText;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AttachmentDescription;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* AttachmentSlot;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_2;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ModifierBorder;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ModifierList;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PoweredEffects;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* PoweredModifier;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* SetBonus;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* SetBonusList;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* SetBonusSpacer;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* StatList;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* StatsBorder;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* StatsSpacer;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToolDamage_C* UMG_ToolDamage;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSetBonus;  // 0x0300, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSetBonusActive;  // 0x0301, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Item;  // 0x0308, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum Affliction_Stat;  // 0x04F8, size 0x10, named "Affliction Stat"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ConsumableModifier;  // 0x0508, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAlterationsEnum> AlterationPreview;  // 0x0510, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ArbitraryStatMultiplier;  // 0x0520, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NeedsUpdate;  // 0x0524, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FArmourSetsRowHandle Armor_Set_Override;  // 0x0528, size 0x18, named "Armor Set Override"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideAfflictions;  // 0x0540, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) void ApplyArbitraryMultiplier(int32 InStat, int32& OutModifiedStat) const;  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_ItemStats(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceUpdate();
    UFUNCTION(BlueprintCallable) void Has_Any_Visible_Stats(bool& HasStats);  // parameters 0x1, named "Has Any Visible Stats"
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Update(FItemData Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void Update_Building_Type_Stats(FBuildingTypesRowHandle BuildingTypeRow);  // parameters 0x18, named "Update Building Type Stats"
    UFUNCTION(BlueprintCallable) void UpdateAlterations();
    UFUNCTION(BlueprintCallable) void UpdateArmorStats(FItemData Item, FArmourSetsRowHandle Armor_Set_Override);  // parameters 0x208
};
