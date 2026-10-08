// /Game/BP/Debugging/UMG_FloatingDamageNumber.UMG_FloatingDamageNumber_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x348, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FloatingDamageNumber_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* TextFade;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CritIcon;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CritText;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon_ExtraStrongCritPoint;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon_ExtraWeakCritPoint;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon_NoCritDamage;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon_Ricochet;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon_StrongCritPoint;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon_WeakCritPoint;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* MainHBox;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_IconContainer;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ReturnIcon;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DefaultFontSize;  // 0x0320, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* Font_Family;  // 0x0328, size 0x8, named "Font Family"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText _;  // 0x0330, size 0x18, named "!"

    UFUNCTION(BlueprintCallable) void AdjustFontForCriticalHit(FText Damage, FCriticalHitAreasEnum CriticalHitType);  // parameters 0x28
    UFUNCTION() void ExecuteUbergraph_UMG_FloatingDamageNumber(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayFadeoutAnim(bool CriticalHit);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Set_Scale(float Scale);  // parameters 0x4, named "Set Scale"
    UFUNCTION(BlueprintCallable) void ShowCriticalHitImages(FCriticalHitAreasEnum Critical);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
