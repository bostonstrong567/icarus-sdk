// /Game/BP/UI/Talents/Base/UMG_Talent_Base.UMG_Talent_Base_C
// Derives from: UTalentWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x340, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Talent_Base_C : public UTalentWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentViewsRowHandle ViewData;  // 0x0290, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentModelData CurrentState;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UTalentViewInterface* View;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool QueueRefresh;  // 0x02C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnHover OnHover;  // 0x02C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnUnhover OnUnhover;  // 0x02D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FTalentsRowHandle, FSessionFlagsRowHandle> TalentHightlightFlagMap;  // 0x02E8, size 0x50
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_WidgetHighlightBase_C* CachedHighlightWidget;  // 0x0338, size 0x8

    UFUNCTION(BlueprintCallable) void CanUnlock(bool& Result);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_Talent_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetOverlay(UOverlay*& Overlay);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnHover__DelegateSignature(UUMG_Talent_Base_C* Talent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnStateChanged(FTalentModelData NewState);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnTalentSet();
    UFUNCTION(BlueprintCallable) void OnUnhover__DelegateSignature();
    UFUNCTION(BlueprintCallable) void RefreshState();
    UFUNCTION(BlueprintCallable) void Set_State(FTalentModelData New_State);  // parameters 0x10, named "Set State"
    UFUNCTION(BlueprintCallable) void Set_View(UTalentViewInterface* View);  // parameters 0x8, named "Set View"
    UFUNCTION(BlueprintCallable) void Set_Zoom_Level(int32 Level, float Scale);  // parameters 0x8, named "Set Zoom Level"
};
