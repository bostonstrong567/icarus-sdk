// /Game/BP/UI/Talents/Prospects/UMG_TalentView_Prospect.UMG_TalentView_Prospect_C
// Derives from: UTalentViewInterface > UUserWidget > UWidget > UVisual > UObject
// size 0x458, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TalentView_Prospect_C : public UTalentViewInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ArchetypeBox;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BackgroundImage;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* GraphWidgetSwitcher;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* invertedarrow;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* invertedarrow_1;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* invertedarrow_2;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* invertedarrow_3;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Noise;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* Pan;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pattern;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* Select_1;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Shadow;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Shadow_1;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* UMG_PhysicalKeyPrompt;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SpacePlayerInfo_C* UMG_SpacePlayerInfo;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TalentFilter_C* UMG_TalentFilter;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TerrainSelection_C* UMG_TerrainSelection;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_TalentArchetype_Player_C*> Buttons;  // 0x0308, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText AvailableTalents;  // 0x0318, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor False;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProspectSelected ProspectSelected;  // 0x0340, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FTalentsRowHandle, FProspectInfo> ProspectInfos;  // 0x0350, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, FTalentsRowHandle> ProspectDTKeys;  // 0x03A0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProspectListUpdated ProspectListUpdated;  // 0x03F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SelectingTerrain;  // 0x0400, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FTalentArchetypesRowHandle, TSoftObjectPtr<UTexture2D>> Archetype;  // 0x0408, size 0x50

    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_TalentView_Prospect_UMG_TerrainSelection_K2Node_ComponentBoundEvent_4_TalentArchetypeSelected__DelegateSignature(FTalentArchetypesRowHandle Archetype);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_TalentView_Prospect(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateProspects(const TArray<FTalentsRowHandle>& ProspectTalentRowHandles);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UTalentGraphWidget* GetGraphWidget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UTalentGraphWidget* GetGraphWidget_0() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) TArray<UTalentTreeWidget*> GetTalentTreeWidgets();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnClick(FTalentArchetypesRowHandle Archetype);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnFail_FEA0825340002E0EB468BBA81BA64A6F(const FResGenerateProspects& Response);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnLockedMissionsUpdated(const TArray<FTimeLockedMissionInfo>& NewLockedMissions, const TArray<FTimeLockedMissionInfo>& RemovedLockedMissions);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void OnModelViewChanged(UTalentModelInterface* InModel, UTalentViewInterface* InView);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnSuccess_FEA0825340002E0EB468BBA81BA64A6F(const FResGenerateProspects& Response);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ProspectClicked(FTalentsRowHandle Talent, FText Error);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void ProspectListUpdated__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ProspectSelected__DelegateSignature(FProspectServerInfo ProspectInfo, FText Error);  // parameters 0x1C8
    UFUNCTION(BlueprintCallable) void ReturnToTerrainSelection();
    UFUNCTION(BlueprintCallable) void SetEncryptedState(EOnProspectAvailability Status);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetIsOpenWorld(bool OpenWorld);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSelectedArchetype(const FTalentArchetypesRowHandle& Archetype);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Setup(UTalentModelInterface* TalentModel);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateTerrainSelection();
};
