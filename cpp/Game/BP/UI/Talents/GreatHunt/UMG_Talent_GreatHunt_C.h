// /Game/BP/UI/Talents/GreatHunt/UMG_Talent_GreatHunt.UMG_Talent_GreatHunt_C
// Derives from: UUMG_Talent_Base_C > UTalentWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x410, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Talent_GreatHunt_C : public UUMG_Talent_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DownArrow;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DownArrow_Small;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LeftArrow;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LeftArrow_Small;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* RightArrow;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* RightArrow_Small;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* TalentOverlay;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TypeImage;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* TypeOverlay;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Talent_Mission_Common_C* UMG_Talent_Mission_Common;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UpArrow;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UpArrow_Small;  // 0x03A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProspectMissionClicked ProspectMissionClicked;  // 0x03B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int64 ExpireTime;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Hovered;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Clicked;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RemaingTime;  // 0x03D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SearchHighlightFlag;  // 0x03DC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CachedSearchString;  // 0x03E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_ClickFailed;  // 0x03F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGreatHuntsRowHandle GreatHunt;  // 0x03F8, size 0x18

    UFUNCTION() void BndEvt__UMG_Talent_GreatHunt_UMG_Talent_Mission_Common_K2Node_ComponentBoundEvent_0_ProspectMissionClicked__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_Talent_GreatHunt(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetArrowImageForTalent(FTalentsRowHandle RowHandle, UImage*& ArrowImage, UImage*& SmallArrowImage) const;  // parameters 0x28
    UFUNCTION(BlueprintCallable) void GetOverlay(UOverlay*& Overlay);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetStringForFilterSearch();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnProspectSelectedHandler(FTalentsRowHandle GreatHuntTalent);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnStateChanged(FTalentModelData NewState);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnTalentSet();
    UFUNCTION(BlueprintCallable) void ProspectMissionClicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Refresh_Display();  // named "Refresh Display"
    UFUNCTION(BlueprintCallable) void RefreshSearchHighlight();
    UFUNCTION(BlueprintCallable) void ResetTalentState();
    UFUNCTION(BlueprintCallable) void Set_Zoom_Level(int32 Level, float Scale);  // parameters 0x8, named "Set Zoom Level"
    UFUNCTION(BlueprintCallable) void SetIsOpenWorld(bool IsOpenWorld);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void SetSearchHighlight(bool bHighlighted);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateDirection();
    UFUNCTION(BlueprintCallable) void UpdateTalentType(bool& bIsNormalTalent);  // parameters 0x1
};
