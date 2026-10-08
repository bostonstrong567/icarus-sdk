// /Game/UI/Windows/GreatHunt/UMG_GreatHunt_Interface.UMG_GreatHunt_Interface_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x3FB, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_GreatHunt_Interface_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* AbandonPulsing;  // 0x0288, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* MissionHuntAnimation;  // 0x0290, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* AbandonedDescription;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AbandonedDescriptionText;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* BossTitle;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BossTitle_2;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ButtonPrompts;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* DescriptionBox;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* GreatHuntTalentSlot;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* GreatHuntViewSwitcher;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HuntSelection;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* LegendaryItems;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainBorder;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* menupattern;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MissionOverview;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GreatHunt_MissionSelected_C* MissionSelected;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* PanPrompt;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* ProspectChanges;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionBoardProspectSelected_C* ProspectSelected;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* RegionLockDescription;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RegionLockText;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* SelectPrompt;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_WeaponInfo_C* UMG_BioLab_WeaponInfo;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GreatHunt_Description_C* UMG_GreatHunt_Description;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GreatHunt_Description_C* UMG_GreatHunt_Description_1;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GreatHunt_Description_C* UMG_GreatHunt_Description_2;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GreatHunt_Description_C* UMG_GreatHunt_Description_3;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GreatHunt_Description_C* UMG_GreatHunt_Description_4;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GreatHunt_Description_C* UMG_GreatHunt_Description_5;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* ZoomPrompt;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0380, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle Session_Flag;  // 0x0388, size 0x18, named "Session Flag"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FWeaponClicked WeaponClicked;  // 0x03A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLivingItemShopItemsRowHandle Item;  // 0x03B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText HuntText;  // 0x03C8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentArchetypesRowHandle Talent_Archetype;  // 0x03E0, size 0x18, named "Talent Archetype"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasSetDescription;  // 0x03F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsCurrentProspectsBoss;  // 0x03F9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Showing_Hunt_Selection;  // 0x03FA, size 0x1, named "Showing Hunt Selection"

    UFUNCTION(BlueprintCallable) void Append(FText Text, FText ToAdd, FText& Out);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void BiolabBackClicked();
    UFUNCTION() void BndEvt__UMG_GreatHunt_Interface_ProspectSelected_K2Node_ComponentBoundEvent_1_OperationSelected__DelegateSignature(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION() void BndEvt__UMG_GreatHunt_Interface_ProspectSelected_K2Node_ComponentBoundEvent_2_OperationClosed__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DisplayRegionDescriptionText(FTalentArchetypesRowHandle TalentArchetype);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void DisplayRegionLockText(FTalentArchetypesRowHandle TalentArchetype, FTerrainsRowHandle Terrain);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) void DoesGreatHuntTalentMatchTerrain(FTalentsRowHandle RowHandle, bool& Match, FText& Terrain_Name);  // parameters 0x38
    UFUNCTION() void ExecuteUbergraph_UMG_GreatHunt_Interface(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetQuestCancelDelay();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetTalentTerrain(FTalentArchetypesRowHandle TalentArchetype, FTerrainsRowHandle& Terrain);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void GreatHuntTalentModelUpdated(UTalentModelInterface_Const* Model);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HideGreatHuntButton(FTerrainsRowHandle Terrain, FTalentArchetypesRowHandle TalentArchetypeRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void ItemClicked(FLivingItemShopItemsRowHandle LegendaryItem);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnGreatHuntSelected(bool bShowingHuntSelection, FTalentArchetypesRowHandle TalentArchetype, FLivingItemShopItemsRowHandle LegendaryItem);  // parameters 0x34
    UFUNCTION(BlueprintCallable) void OnProspectSelectedHandler(FProspectServerInfo Prospect, FTalentsRowHandle GreatHuntTalent, FText Error);  // parameters 0x1E0
    UFUNCTION(BlueprintCallable) void OperationCancelled();
    UFUNCTION(BlueprintCallable) void OperationSelected(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void RefreshAbandonedText();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UMG_GreatHunt_Interface_AutoGenFunc(FLivingItemShopItemsRowHandle Weapon);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void WeaponClicked__DelegateSignature();
};
