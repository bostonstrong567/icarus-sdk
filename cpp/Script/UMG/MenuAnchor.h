// /Script/UMG.MenuAnchor
// Derives from: UContentWidget > UPanelWidget > UWidget > UVisual > UObject
// size 0x170, declared in Engine/Source/Runtime/UMG/Public/Components/MenuAnchor.h

UCLASS()
class UMenuAnchor : public UContentWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UUserWidget> MenuClass;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere) FGetWidget OnGetMenuContentEvent;  // 0x0128, size 0x10
    UPROPERTY(EditAnywhere) FGetUserWidget OnGetUserMenuContentEvent;  // 0x0138, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EMenuPlacement> Placement;  // 0x0148, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bFitInWindow;  // 0x0149, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool ShouldDeferPaintingAfterWindowContent;  // 0x014A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool UseApplicationMenuStack;  // 0x014B, size 0x1
    UPROPERTY(BlueprintAssignable) FOnMenuOpenChangedEvent OnMenuOpenChanged;  // 0x0150, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SMenuAnchor,0> MyMenuAnchor;  // 0x0160, protected

    UFUNCTION(BlueprintCallable) void Close();
    UFUNCTION(BlueprintCallable) void FitInWindow(bool bFit);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetMenuPosition() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasOpenSubMenus() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOpen() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Open(bool bFocusMenu);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldOpenDueToClick() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ToggleOpen(bool bFocusOnOpen);  // parameters 0x1
};
