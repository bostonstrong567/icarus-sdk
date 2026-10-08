// /Game/BP/UI/Talents/GreatHunt/UMG_Talentview_GreatHunt.UMG_Talentview_GreatHunt_C
// Derives from: UTalentViewInterface > UUserWidget > UWidget > UVisual > UObject
// size 0x740, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Talentview_GreatHunt_C : public UTalentViewInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* BackButton;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ButtonBack;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* GraphWidgetSwitcher;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HuntImage;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Outpost_Fill;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* OutpostfillClose;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GreatHunt_Selection_C* UMG_GreatHunt_Selection;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TalentFilter_C* UMG_TalentFilter;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_TalentArchetype_Player_C*> Buttons;  // 0x02B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText AvailableTalents;  // 0x02C8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor False;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProspectSelected ProspectSelected;  // 0x02F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FTalentsRowHandle, FProspectInfo> ProspectInfos;  // 0x0300, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, FTalentsRowHandle> ProspectDTKeys;  // 0x0350, size 0x50
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProspectListUpdated ProspectListUpdated;  // 0x03A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SelectingHunt;  // 0x03B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusProspect Icarus_Prospect;  // 0x03B8, size 0x2D0, named "Icarus Prospect"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FHuntSelected HuntSelected;  // 0x0688, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentArchetypesRowHandle LastArchetype;  // 0x0698, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FShowLegendaryWeapon ShowLegendaryWeapon;  // 0x06B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLivingItemShopItemsRowHandle Weapon;  // 0x06C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBackPressed BackPressed;  // 0x06D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OnOutpost;  // 0x06E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FTalentArchetypesRowHandle, TSoftObjectPtr<UTexture2D>> HuntImages;  // 0x06F0, size 0x50

    UFUNCTION(BlueprintCallable) void BackPressed__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Talentview_GreatHunt_ButtonBack_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Talentview_GreatHunt_OutpostfillClose_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Talentview_GreatHunt_UMG_ButtonIcon_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Talentview_GreatHunt_UMG_GreatHunt_Selection_K2Node_ComponentBoundEvent_1_TalentArchetypeSelected__DelegateSignature(FTalentArchetypesRowHandle Archetype, FLivingItemShopItemsRowHandle Weapon);  // parameters 0x30
    UFUNCTION() void BndEvt__UMG_Talentview_GreatHunt_UMG_GreatHunt_Selection_K2Node_ComponentBoundEvent_2_ShowLegendaryWeapon__DelegateSignature(FLivingItemShopItemsRowHandle Weapon);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_Talentview_GreatHunt_UMG_GreatHunt_Selection_K2Node_ComponentBoundEvent_4_ShowOutpostFill__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Talentview_GreatHunt(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateProspects(const TArray<FTalentsRowHandle>& ProspectTalentRowHandles);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UTalentGraphWidget* GetGraphWidget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) TArray<UTalentTreeWidget*> GetTalentTreeWidgets();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void HuntSelected__DelegateSignature(bool bShowingHuntSelection, FTalentArchetypesRowHandle TalentArchetype, FLivingItemShopItemsRowHandle Weapon);  // parameters 0x34
    UFUNCTION(BlueprintCallable) void MakeProspectServerInfo(FTalentsRowHandle RowHandle, FProspectInfo& ProspectInfo);  // parameters 0xB8
    UFUNCTION(BlueprintCallable) void OnClick(FTalentArchetypesRowHandle Archetype);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnFail_C8504B744B246ADD83374EBF0BB15C39(const FResGenerateProspects& Response);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnLockedMissionsUpdated(const TArray<FTimeLockedMissionInfo>& NewLockedMissions, const TArray<FTimeLockedMissionInfo>& RemovedLockedMissions);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void OnModelViewChanged(UTalentModelInterface* InModel, UTalentViewInterface* InView);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnSuccess_C8504B744B246ADD83374EBF0BB15C39(const FResGenerateProspects& Response);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ProspectClicked(FTalentsRowHandle Talent, FText Error);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void ProspectListUpdated__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ProspectSelected__DelegateSignature(FProspectServerInfo ProspectInfo, FTalentsRowHandle Talent, FText Error);  // parameters 0x1E0
    UFUNCTION(BlueprintCallable) void ReturnToHuntSelection();
    UFUNCTION(BlueprintCallable) void SetEncryptedState(EOnProspectAvailability Status);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetIsOpenWorld(bool OpenWorld);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSelectedArchetype(const FTalentArchetypesRowHandle& Archetype);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Setup(UTalentModelInterface* TalentModel);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ShowLegendaryWeapon__DelegateSignature(FLivingItemShopItemsRowHandle Weapon);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateHuntSelection();
};
