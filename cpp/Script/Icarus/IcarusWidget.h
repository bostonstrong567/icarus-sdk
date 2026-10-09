// /Script/Icarus.IcarusWidget
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, declared in Icarus/Source/Icarus/UI/IcarusWidget.h

UCLASS(EditInlineNew)
class UIcarusWidget : public UUserWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFeatureLevelsRowHandle RequiredFeatureLevel;  // 0x0260, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFlagsMultiRowHandle RequiredFlag;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bOverrideVisibilityIfFeatureLevelDisabled;  // 0x0290, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESlateVisibility FeatureLevelVisibilityOverride;  // 0x0291, size 0x1
protected:
    EFeatureLevelCheckResult CachedFeatureLevelCheckResult;  // 0x0292, not reflected
public:
    UFUNCTION() void CheckMeetsFeatureLevelRequirements();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusIcarusWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusUpdated(bool bNewFocus);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ForceSetEnabled(bool bInIsEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) EFeatureLevelCheckResult IsFeatureLevelMet();  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) bool IsWidgetFocusable() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetRequiredFeatureLevel(FFeatureLevelsRowHandle InRequiredFeatureLevel);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetRequiredFlag(FFlagsMultiRowHandle InRequiredFlag);  // parameters 0x18
};
