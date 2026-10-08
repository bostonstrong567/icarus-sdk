// /Game/UI/HUD/UMG_AccoladePopup.UMG_AccoladePopup_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x300, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AccoladePopup_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* SlideOut;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* SlideIn;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AccoladeDescription;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AccoladeTitle;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AchievementImage;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_256;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_Description;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_Title;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Line;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainBorder;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* MedalImage;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_4;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* RibbonImage;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* ScaleBox_Title;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAccoladesRowHandle> QueuedAccolades;  // 0x02D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PopupTime;  // 0x02E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeBetweenPopups;  // 0x02EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialDelayTime;  // 0x02F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Popup;  // 0x02F8, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_AccoladePopup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Finished_3BB1A4E9422B43C9055CF99036EF0D9F();
    UFUNCTION(BlueprintCallable) void Finished_A1C5DA234732A9E7D3855CA0319F1CEA();
    UFUNCTION(BlueprintCallable) void InitAccoladePopup();
    UFUNCTION(BlueprintCallable) void OnAccoladeCompleted(FAccoladeCompletedState Accolade);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void PlayPopupSound();
    UFUNCTION(BlueprintCallable) void UpdateAccolades();
    UFUNCTION(BlueprintCallable) void UpdateState(FAccoladesRowHandle Accolade);  // parameters 0x18
};
