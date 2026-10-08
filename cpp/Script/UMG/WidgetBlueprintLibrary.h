// /Script/UMG.WidgetBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h

UCLASS()
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void CancelDragDrop();
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEventReply CaptureJoystick(FEventReply& Reply, UWidget* CapturingWidget, bool bInAllJoysticks);  // parameters 0x180
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEventReply CaptureMouse(FEventReply& Reply, UWidget* CapturingWidget);  // parameters 0x178
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEventReply ClearUserFocus(FEventReply& Reply, bool bInAllUsers);  // parameters 0x178
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static UUserWidget* Create(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetType, APlayerController* OwningPlayer);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static UDragDropOperation* CreateDragDropOperation(TSubclassOf<UDragDropOperation> OperationClass);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEventReply DetectDrag(FEventReply& Reply, UWidget* WidgetDetectingDrag, FKey DragKey);  // parameters 0x190
    UFUNCTION(BlueprintCallable) static FEventReply DetectDragIfPressed(const FPointerEvent& PointerEvent, UWidget* WidgetDetectingDrag, FKey DragKey);  // parameters 0x148
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static void DismissAllMenus();
    UFUNCTION(BlueprintCallable) static void DrawBox(FPaintContext& Context, FVector2D Position, FVector2D Size, USlateBrushAsset* Brush, FLinearColor Tint);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static void DrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static void DrawLines(FPaintContext& Context, const TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static void DrawText(FPaintContext& Context, FString InString, FVector2D Position, FLinearColor Tint);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static void DrawTextFormatted(FPaintContext& Context, const FText& Text, FVector2D Position, UFont* Font, int32 FontSize, FName FontTypeFace, FLinearColor Tint);  // parameters 0x74
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEventReply EndDragDrop(FEventReply& Reply);  // parameters 0x170
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static void GetAllWidgetsOfClass(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, TSubclassOf<UUserWidget> WidgetClass, bool TopLevelOnly);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static void GetAllWidgetsWithInterface(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, TSubclassOf<UInterface> Interface, bool TopLevelOnly);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static UObject* GetBrushResource(const FSlateBrush& Brush);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) static UMaterialInterface* GetBrushResourceAsMaterial(const FSlateBrush& Brush);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) static UTexture2D* GetBrushResourceAsTexture2D(const FSlateBrush& Brush);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) static UDragDropOperation* GetDragDroppingContent();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static UMaterialInstanceDynamic* GetDynamicMaterial(FSlateBrush& Brush);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInputEvent GetInputEventFromCharacterEvent(const FCharacterEvent& Event);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInputEvent GetInputEventFromKeyEvent(const FKeyEvent& Event);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInputEvent GetInputEventFromNavigationEvent(const FNavigationEvent& Event);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static FInputEvent GetInputEventFromPointerEvent(const FPointerEvent& Event);  // parameters 0x88
    UFUNCTION(BlueprintCallable, BlueprintPure) static FKeyEvent GetKeyEventFromAnalogInputEvent(const FAnalogInputEvent& Event);  // parameters 0x78
    UFUNCTION(BlueprintCallable) static void GetSafeZonePadding(UObject* WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEventReply Handled();  // parameters 0xB8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) static bool IsDragDropping();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEventReply LockMouse(FEventReply& Reply, UWidget* CapturingWidget);  // parameters 0x178
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSlateBrush MakeBrushFromAsset(USlateBrushAsset* BrushAsset);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSlateBrush MakeBrushFromMaterial(UMaterialInterface* Material, int32 Width, int32 Height);  // parameters 0x98
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSlateBrush MakeBrushFromTexture(UTexture2D* Texture, int32 Width, int32 Height);  // parameters 0x98
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSlateBrush NoResourceBrush();  // parameters 0x88
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEventReply ReleaseJoystickCapture(FEventReply& Reply, bool bInAllJoysticks);  // parameters 0x178
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEventReply ReleaseMouseCapture(FEventReply& Reply);  // parameters 0x170
    UFUNCTION(BlueprintCallable) static void RestorePreviousWindowTitleBarState();
    UFUNCTION(BlueprintCallable) static void SetBrushResourceToMaterial(FSlateBrush& Brush, UMaterialInterface* Material);  // parameters 0x90
    UFUNCTION(BlueprintCallable) static void SetBrushResourceToTexture(FSlateBrush& Brush, UTexture2D* Texture);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);  // parameters 0xA
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static void SetFocusToGameViewport();
    UFUNCTION(BlueprintCallable) static bool SetHardwareCursor(UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, FName CursorName, FVector2D HotSpot);  // parameters 0x1D
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static void SetInputMode_GameAndUI(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);  // parameters 0x12
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static void SetInputMode_GameAndUIEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);  // parameters 0x12
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static void SetInputMode_GameOnly(APlayerController* PlayerController);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static void SetInputMode_UIOnly(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) static void SetInputMode_UIOnlyEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEventReply SetMousePosition(FEventReply& Reply, FVector2D NewMousePosition);  // parameters 0x178
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEventReply SetUserFocus(FEventReply& Reply, UWidget* FocusWidget, bool bInAllUsers);  // parameters 0x180
    UFUNCTION(BlueprintCallable) static void SetWindowTitleBarCloseButtonActive(bool bActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetWindowTitleBarOnCloseClickedDelegate(FOnGameWindowCloseButtonClickedDelegate Delegate);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void SetWindowTitleBarState(UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEventReply Unhandled();  // parameters 0xB8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEventReply UnlockMouse(FEventReply& Reply);  // parameters 0x170
};
