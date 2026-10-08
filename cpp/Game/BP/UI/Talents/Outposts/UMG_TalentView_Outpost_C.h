// /Game/BP/UI/Talents/Outposts/UMG_TalentView_Outpost.UMG_TalentView_Outpost_C
// Derives from: UTalentViewInterface > UUserWidget > UWidget > UVisual > UObject
// size 0x3F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TalentView_Outpost_C : public UTalentViewInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ArchetypeBox;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* GraphWidgetSwitcher;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* invertedarrow;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* invertedarrow_1;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* invertedarrow_2;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* invertedarrow_3;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Noise;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Outpost_Background;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* Pan;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pattern;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* Select;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Shadow;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Shadow_1;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SpacePlayerInfo_C* UMG_SpacePlayerInfo;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TalentFilter_C* UMG_TalentFilter;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_TalentArchetype_Player_C*> Buttons;  // 0x02F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText AvailableTalents;  // 0x0308, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor False;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProspectSelected ProspectSelected;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FTalentsRowHandle, FProspectInfo> ProspectInfos;  // 0x0340, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, FTalentsRowHandle> ProspectDTKeys;  // 0x0390, size 0x50
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProspectListUpdated ProspectListUpdated;  // 0x03E0, size 0x10

    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CanAddTalent(FRowHandle TalentRowHandle, bool& CanAddTalent);  // parameters 0x19
    UFUNCTION() void ExecuteUbergraph_UMG_TalentView_Outpost(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateProspectsFromTalents(const TArray<FTalentsRowHandle>& ProspectTalentRowHandles);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UTalentGraphWidget* GetGraphWidget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) TArray<UTalentTreeWidget*> GetTalentTreeWidgets();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnClick(FTalentArchetypesRowHandle Archetype);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnFail_DE41FEFE44CE6B2F6450E9AB88178931(const FResGenerateProspects& Response);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnModelViewChanged(UTalentModelInterface* InModel, UTalentViewInterface* InView);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnSuccess_DE41FEFE44CE6B2F6450E9AB88178931(const FResGenerateProspects& Response);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ProspectClicked(FTalentsRowHandle Talent);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ProspectListUpdated__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ProspectSelected__DelegateSignature(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void Setup(UTalentModelInterface* TalentModel);  // parameters 0x8
};
